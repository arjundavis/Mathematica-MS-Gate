
    #include"magnus.h"
    #include "/home/cabrer7/Documents/source/C/armadillo/armadillo-0.6.8/include/armadillo"
    
    #include<math.h>
    #include<complex.h>
    extern double*F;
    
    cx_mat Commutator(cx_mat A, cx_mat B){ return A*B - B*A;}
    
    double pow(int A, int B){ return pow(double(A), double(B)); }
    
    double PrinLieCalc_PrinLieCalc_Private_sum( double (*f)(int t), int ti, int tf  )
    { double sum=0;
      for(int i = ti ; i<=tf ;i++) sum = sum + (*f)(i);
      return sum;
    } 
    
    complex<double> ComplexNumber(double x, double y)
    { complex<double> z(x,y);
      return z;}
cx_mat MagnusSeries2(cx_mat H0, cx_mat M, int T){
 return ComplexNumber(0,-1)*M*g$5339(T);
}
double f$5333( int t){
return F[t];
}
double f$5337( int t){
return F[t];
}
double g$5335( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5333,0,t);
}
double g$5339( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5337,0,t);
}

cx_mat MagnusSeries3(cx_mat H0, cx_mat M, int T){
 return Commutator(M,H0)*(g$5358(T)/2. - g$5364(T)/2.);
}
double f$5346( int t){
return F[t];
}
double f$5348( int t){
return t*F[t];
}
double f$5354( int t){
return F[t];
}
double f$5356( int t){
return t*F[t];
}
double f$5362( int t){
return g$5360(t);
}
double g$5350( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5348,0,t);
}
double g$5352( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5346,0,t);
}
double g$5358( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5356,0,t);
}
double g$5360( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5354,0,t);
}
double g$5364( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5362,0,t);
}

cx_mat MagnusSeries4(cx_mat H0, cx_mat M, int T){
 return Commutator(Commutator(M,H0),H0)*(ComplexNumber(0,0.08333333333333333)*g$5401(T) - ComplexNumber(0,0.25)*g$5415(T) - ComplexNumber(0,0.08333333333333333)*g$5417(T) + ComplexNumber(0,0.25)*g$5423(T));
}
double f$5377( int t){
return F[t];
}
double f$5379( int t){
return t*F[t];
}
double f$5381( int t){
return F[t];
}
double f$5383( int t){
return pow(t,2)*F[t];
}
double f$5393( int t){
return F[t];
}
double f$5395( int t){
return t*F[t];
}
double f$5397( int t){
return F[t];
}
double f$5399( int t){
return pow(t,2)*F[t];
}
double f$5409( int t){
return g$5403(t);
}
double f$5411( int t){
return g$5405(t);
}
double f$5413( int t){
return t*g$5407(t);
}
double f$5421( int t){
return g$5419(t);
}
double g$5385( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5383,0,t);
}
double g$5387( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5379,0,t);
}
double g$5389( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5377,0,t);
}
double g$5391( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5381,0,t);
}
double g$5401( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5399,0,t);
}
double g$5403( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5395,0,t);
}
double g$5405( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5393,0,t);
}
double g$5407( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5397,0,t);
}
double g$5415( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5409,0,t);
}
double g$5417( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5413,0,t);
}
double g$5419( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5411,0,t);
}
double g$5423( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5421,0,t);
}

cx_mat MagnusSeries5(cx_mat H0, cx_mat M, int T){
 return Commutator(M,Commutator(M,H0))*(ComplexNumber(0,-0.08333333333333333)*g$5490(T) - ComplexNumber(0,0.25)*g$5492(T) + ComplexNumber(0,0.08333333333333333)*g$5494(T) + ComplexNumber(0,0.25)*g$5500(T));
}
double f$5450( int t){
return F[t];
}
double f$5452( int t){
return F[t];
}
double f$5454( int t){
return t*F[t];
}
double f$5456( int t){
return F[t];
}
double f$5466( int t){
return F[t];
}
double f$5468( int t){
return F[t];
}
double f$5470( int t){
return t*F[t];
}
double f$5472( int t){
return F[t];
}
double f$5482( int t){
return pow(g$5474(t),2);
}
double f$5484( int t){
return F[t]*g$5476(t);
}
double f$5486( int t){
return g$5478(t);
}
double f$5488( int t){
return t*F[t]*g$5480(t);
}
double f$5498( int t){
return F[t]*g$5496(t);
}
double g$5458( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5450,0,t);
}
double g$5460( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5454,0,t);
}
double g$5462( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5452,0,t);
}
double g$5464( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5456,0,t);
}
double g$5474( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5466,0,t);
}
double g$5476( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5470,0,t);
}
double g$5478( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5468,0,t);
}
double g$5480( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5472,0,t);
}
double g$5490( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5482,0,t);
}
double g$5492( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5484,0,t);
}
double g$5494( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5488,0,t);
}
double g$5496( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5486,0,t);
}
double g$5500( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5498,0,t);
}

cx_mat MagnusSeries6(cx_mat H0, cx_mat M, int T){
 return Commutator(Commutator(Commutator(M,H0),H0),H0)*(g$5589(T)/24. + g$5591(T)/24. - g$5609(T)/8. - g$5611(T)/24. - g$5613(T)/24. + g$5619(T)/8.);
}
double f$5529( int t){
return F[t];
}
double f$5531( int t){
return t*F[t];
}
double f$5533( int t){
return F[t];
}
double f$5535( int t){
return pow(t,2)*F[t];
}
double f$5537( int t){
return F[t];
}
double f$5539( int t){
return t*F[t];
}
double f$5553( int t){
return F[t];
}
double f$5555( int t){
return t*F[t];
}
double f$5557( int t){
return F[t];
}
double f$5559( int t){
return pow(t,2)*F[t];
}
double f$5561( int t){
return F[t];
}
double f$5563( int t){
return t*F[t];
}
double f$5577( int t){
return g$5565(t);
}
double f$5579( int t){
return g$5567(t);
}
double f$5581( int t){
return g$5569(t);
}
double f$5583( int t){
return t*g$5571(t);
}
double f$5585( int t){
return t*g$5573(t);
}
double f$5587( int t){
return g$5575(t);
}
double f$5601( int t){
return g$5593(t);
}
double f$5603( int t){
return g$5595(t);
}
double f$5605( int t){
return g$5597(t);
}
double f$5607( int t){
return t*g$5599(t);
}
double f$5617( int t){
return g$5615(t);
}
double g$5541( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5535,0,t);
}
double g$5543( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5531,0,t);
}
double g$5545( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5529,0,t);
}
double g$5547( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5533,0,t);
}
double g$5549( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5539,0,t);
}
double g$5551( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5537,0,t);
}
double g$5565( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5559,0,t);
}
double g$5567( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5555,0,t);
}
double g$5569( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5553,0,t);
}
double g$5571( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5557,0,t);
}
double g$5573( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5563,0,t);
}
double g$5575( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5561,0,t);
}
double g$5589( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5577,0,t);
}
double g$5591( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5585,0,t);
}
double g$5593( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5579,0,t);
}
double g$5595( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5583,0,t);
}
double g$5597( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5581,0,t);
}
double g$5599( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5587,0,t);
}
double g$5609( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5601,0,t);
}
double g$5611( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5603,0,t);
}
double g$5613( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5607,0,t);
}
double g$5615( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5605,0,t);
}
double g$5619( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5617,0,t);
}

cx_mat MagnusSeries7(cx_mat H0, cx_mat M, int T){
 return Commutator(Commutator(M,Commutator(M,H0)),H0)*(g$5728(T)/24. - g$5750(T)/24. - g$5752(T)/8. + g$5754(T)/24. - g$5756(T)/24. + g$5762(T)/8.);
}
double f$5668( int t){
return F[t];
}
double f$5670( int t){
return F[t];
}
double f$5672( int t){
return t*F[t];
}
double f$5674( int t){
return F[t];
}
double f$5676( int t){
return F[t];
}
double f$5678( int t){
return t*F[t];
}
double f$5692( int t){
return F[t];
}
double f$5694( int t){
return F[t];
}
double f$5696( int t){
return t*F[t];
}
double f$5698( int t){
return F[t];
}
double f$5700( int t){
return F[t];
}
double f$5702( int t){
return t*F[t];
}
double f$5716( int t){
return pow(g$5704(t),2);
}
double f$5718( int t){
return F[t]*g$5706(t);
}
double f$5720( int t){
return g$5708(t);
}
double f$5722( int t){
return t*F[t]*g$5710(t);
}
double f$5724( int t){
return t*F[t]*g$5712(t);
}
double f$5726( int t){
return g$5714(t);
}
double f$5740( int t){
return g$5730(t);
}
double f$5742( int t){
return g$5732(t);
}
double f$5744( int t){
return g$5734(t);
}
double f$5746( int t){
return F[t]*g$5736(t);
}
double f$5748( int t){
return t*F[t]*g$5738(t);
}
double f$5760( int t){
return g$5758(t);
}
double g$5680( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5668,0,t);
}
double g$5682( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5672,0,t);
}
double g$5684( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5670,0,t);
}
double g$5686( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5674,0,t);
}
double g$5688( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5678,0,t);
}
double g$5690( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5676,0,t);
}
double g$5704( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5692,0,t);
}
double g$5706( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5696,0,t);
}
double g$5708( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5694,0,t);
}
double g$5710( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5698,0,t);
}
double g$5712( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5702,0,t);
}
double g$5714( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5700,0,t);
}
double g$5728( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5724,0,t);
}
double g$5730( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5716,0,t);
}
double g$5732( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5718,0,t);
}
double g$5734( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5722,0,t);
}
double g$5736( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5720,0,t);
}
double g$5738( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5726,0,t);
}
double g$5750( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5740,0,t);
}
double g$5752( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5742,0,t);
}
double g$5754( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5744,0,t);
}
double g$5756( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5748,0,t);
}
double g$5758( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5746,0,t);
}
double g$5762( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5760,0,t);
}

cx_mat MagnusSeries8(cx_mat H0, cx_mat M, int T){
 return Commutator(M,Commutator(Commutator(M,H0),H0))*(g$5889(T)/24. + g$5891(T)/24. - g$5909(T)/24. - g$5911(T)/8. - g$5913(T)/24. + g$5919(T)/8.);
}
double f$5813( int t){
return F[t];
}
double f$5815( int t){
return F[t];
}
double f$5817( int t){
return F[t];
}
double f$5819( int t){
return t*F[t];
}
double f$5821( int t){
return F[t];
}
double f$5823( int t){
return t*F[t];
}
double f$5825( int t){
return F[t];
}
double f$5827( int t){
return pow(t,2)*F[t];
}
double f$5845( int t){
return F[t];
}
double f$5847( int t){
return F[t];
}
double f$5849( int t){
return F[t];
}
double f$5851( int t){
return t*F[t];
}
double f$5853( int t){
return F[t];
}
double f$5855( int t){
return t*F[t];
}
double f$5857( int t){
return F[t];
}
double f$5859( int t){
return pow(t,2)*F[t];
}
double f$5877( int t){
return g$5861(t)*g$5863(t);
}
double f$5879( int t){
return g$5867(t);
}
double f$5881( int t){
return F[t]*g$5869(t);
}
double f$5883( int t){
return g$5871(t);
}
double f$5885( int t){
return g$5873(t);
}
double f$5887( int t){
return t*g$5875(t);
}
double f$5901( int t){
return g$5865(t)*g$5893(t);
}
double f$5903( int t){
return F[t]*g$5895(t);
}
double f$5905( int t){
return F[t]*g$5897(t);
}
double f$5907( int t){
return g$5899(t);
}
double f$5917( int t){
return F[t]*g$5915(t);
}
double g$5829( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5817,0,t);
}
double g$5831( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5819,0,t);
}
double g$5833( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5815,0,t);
}
double g$5835( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5813,0,t);
}
double g$5837( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5827,0,t);
}
double g$5839( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5823,0,t);
}
double g$5841( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5821,0,t);
}
double g$5843( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5825,0,t);
}
double g$5861( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5849,0,t);
}
double g$5863( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5851,0,t);
}
double g$5865( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5847,0,t);
}
double g$5867( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5845,0,t);
}
double g$5869( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5859,0,t);
}
double g$5871( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5855,0,t);
}
double g$5873( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5853,0,t);
}
double g$5875( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5857,0,t);
}
double g$5889( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5877,0,t);
}
double g$5891( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5881,0,t);
}
double g$5893( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5879,0,t);
}
double g$5895( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5883,0,t);
}
double g$5897( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5887,0,t);
}
double g$5899( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5885,0,t);
}
double g$5909( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5901,0,t);
}
double g$5911( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5903,0,t);
}
double g$5913( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5905,0,t);
}
double g$5915( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5907,0,t);
}
double g$5919( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5917,0,t);
}

cx_mat MagnusSeries9(cx_mat H0, cx_mat M, int T){
 return Commutator(M,Commutator(M,Commutator(M,H0)))*(g$6052(T)/24. - g$6074(T)/24. - g$6076(T)/24. - g$6078(T)/8. + g$6080(T)/24. + g$6086(T)/8.);
}
double f$5976( int t){
return F[t];
}
double f$5978( int t){
return F[t];
}
double f$5980( int t){
return F[t];
}
double f$5982( int t){
return F[t];
}
double f$5984( int t){
return t*F[t];
}
double f$5986( int t){
return F[t];
}
double f$5988( int t){
return t*F[t];
}
double f$5990( int t){
return F[t];
}
double f$6008( int t){
return F[t];
}
double f$6010( int t){
return F[t];
}
double f$6012( int t){
return F[t];
}
double f$6014( int t){
return F[t];
}
double f$6016( int t){
return t*F[t];
}
double f$6018( int t){
return F[t];
}
double f$6020( int t){
return t*F[t];
}
double f$6022( int t){
return F[t];
}
double f$6040( int t){
return F[t]*g$6024(t)*g$6026(t);
}
double f$6042( int t){
return pow(g$6028(t),2);
}
double f$6044( int t){
return g$6032(t);
}
double f$6046( int t){
return F[t]*g$6034(t);
}
double f$6048( int t){
return g$6036(t);
}
double f$6050( int t){
return t*F[t]*g$6038(t);
}
double f$6064( int t){
return F[t]*g$6054(t);
}
double f$6066( int t){
return F[t]*g$6030(t)*g$6056(t);
}
double f$6068( int t){
return F[t]*g$6058(t);
}
double f$6070( int t){
return F[t]*g$6060(t);
}
double f$6072( int t){
return F[t]*g$6062(t);
}
double f$6084( int t){
return F[t]*g$6082(t);
}
double g$5992( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5982,0,t);
}
double g$5994( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5984,0,t);
}
double g$5996( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5976,0,t);
}
double g$5998( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5980,0,t);
}
double g$6000( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5978,0,t);
}
double g$6002( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5988,0,t);
}
double g$6004( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5986,0,t);
}
double g$6006( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$5990,0,t);
}
double g$6024( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6014,0,t);
}
double g$6026( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6016,0,t);
}
double g$6028( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6008,0,t);
}
double g$6030( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6012,0,t);
}
double g$6032( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6010,0,t);
}
double g$6034( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6020,0,t);
}
double g$6036( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6018,0,t);
}
double g$6038( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6022,0,t);
}
double g$6052( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6040,0,t);
}
double g$6054( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6042,0,t);
}
double g$6056( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6044,0,t);
}
double g$6058( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6046,0,t);
}
double g$6060( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6050,0,t);
}
double g$6062( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6048,0,t);
}
double g$6074( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6064,0,t);
}
double g$6076( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6066,0,t);
}
double g$6078( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6068,0,t);
}
double g$6080( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6070,0,t);
}
double g$6082( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6072,0,t);
}
double g$6086( int t){
return PrinLieCalc_PrinLieCalc_Private_sum(&f$6084,0,t);
}
