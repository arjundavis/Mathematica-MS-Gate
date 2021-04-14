#include "/home/cabrer7/Documents/source/C/armadillo/armadillo-0.6.8/include/armadillo"
#include<iostream>
#include<math.h>
#include"magnus.h"

void StackMatrix(cx_mat &Omega3List, cx_mat &Omega3, int t);
void StackRealMatrix(mat &OmegaList, cx_mat &Omega, int t);
void StackImaginaryMatrix(mat &OmegaList, cx_mat &Omega, int t);

using namespace arma;
using namespace std;

double *F=0;

int main()
{
  double x;

  vec field;
  field.load("./input/Field.txt",raw_ascii);
  cout<<" Field length ="<<field.n_elem<<"\n";
  F = field.memptr();

  const int fieldLength = 512;  // Number of field points
 
   //Defining matrices for Omega 2 
   cx_mat Omega2(3,3);  
   cx_mat Omega2List(3*fieldLength,3); 
   mat RealOmega2List(3*fieldLength,3); //The real stack matrix Omega2
   mat ImaginaryOmega2List(3*fieldLength,3);//The imaginary stack matrix Omega2

   //Defining matrices for Omega 3
   cx_mat Omega3(3,3);
   cx_mat Omega3List(3*fieldLength,3);
   mat RealOmega3List(3*fieldLength,3);
   mat ImaginaryOmega3List(3*fieldLength,3);

//Defining matrices for Omega 4
   cx_mat Omega4(3,3);
   cx_mat Omega4List(3*fieldLength,3);
   mat RealOmega4List(3*fieldLength,3);
   mat ImaginaryOmega4List(3*fieldLength,3);
   
   //More matrices for more Omega terms can be added


   //The interaction matrices
  mat  zero(3,3);
  mat Re_H0(3,3);
  mat Re_Mu(3,3);
  mat Im_Mu(3,3);

  Re_H0.load("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/input/H.txt");
  Re_Mu.load("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/input/Re_Mu.txt");
  Im_Mu.load("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/input/Im_Mu.txt");  
 
  cx_mat H0(Re_H0,zero);
  cx_mat Mu(Re_Mu,Im_Mu);

  cout<<"H0=\n"<<H0<<"\n";
  cout<<"Mu=\n"<<Mu<<"\n";

  //Evaluation of the loop

    for(int t=0; t<fieldLength; t++){
    Omega2 = MagnusSeries2( H0,  Mu,  t );                // Evaluating Omega2 at time t 
    StackRealMatrix(RealOmega2List, Omega2 , t);          //Writing the real part in the real stack 
    StackImaginaryMatrix(ImaginaryOmega2List, Omega2 , t);//Writing the imag part in the imag stack

    Omega3 = MagnusSeries3( H0,  Mu,  t ); //Evaluating OMega3 at time t
    StackRealMatrix(RealOmega3List, Omega3 , t);
    StackImaginaryMatrix(ImaginaryOmega3List, Omega3 , t);

    Omega4 = MagnusSeries4( H0,  Mu,  t ); //Evaluating OMega3 at time t
    StackRealMatrix(RealOmega4List, Omega4 , t);
    StackImaginaryMatrix(ImaginaryOmega4List, Omega4 , t);
    }
  //Omega2 = MagnusSeries2( H0,  Mu,  0 );
  //Omega2.print(); 


  //........................SAVING THE SATCK .......................

  
 RealOmega2List.save("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/output/RealOutput2.txt",
		     raw_ascii);
 ImaginaryOmega2List.save("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/output/ImaginaryOutput2.txt",
			  raw_ascii);


 RealOmega3List.save("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/output/RealOutput3.txt",
		     raw_ascii); 
 ImaginaryOmega3List.save("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/output/ImaginaryOutput3.txt",
			  raw_ascii);

 RealOmega4List.save("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/output/RealOutput4.txt",
		     raw_ascii); 
 ImaginaryOmega4List.save("/home/cabrer7/Documents/source/mathematica/magnus/cIMUC/output/ImaginaryOutput4.txt",
			  raw_ascii);

  return 1;
}


//.....................................
void StackMatrix(cx_mat &OmegaList, cx_mat &Omega, int t)
{
  int n = Omega.n_rows;

  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
      OmegaList(i + n*t , j)= Omega(i,j);
    } 
}
//.....................................
void StackRealMatrix(mat &OmegaList, cx_mat &Omega, int t)
{
  int n = Omega.n_rows;

  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
      OmegaList(i + n*t , j)= real(Omega(i,j));
    } 
}
//.....................................
void StackImaginaryMatrix(mat &OmegaList, cx_mat &Omega, int t)
{
  int n = Omega.n_rows;

  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
    OmegaList(i + n*t , j)= imag(Omega(i,j));
    } 
}
