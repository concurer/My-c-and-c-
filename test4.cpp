#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<math.h>
double f(double n){
return (pow(n,7)+pow(n,5)+pow(n,3)+30*n+1000);
}

int main(){
  cout<<"SECANT METHOD"<<endl;
  double x1,x2,x3,xl1,xu1,xl,xu,ES;
  //let xil=xi-1,xi_1=xi+1.
  double xil,xi,xi_1;
  double EA;
  int i=1,n;


  cout<<"enter significant digit"<<endl;
  cin>>n;
  ES=0.5*pow(10,2-n);
  cout<<"ES="<<ES<<endl;
  EA=ES+1;
  cout<<"enter ur choice"<<endl;
  cin>>x1;
  cout<<endl;
  x2=x1-1;
  x3=x1+1;
  //condition for getting limits
if(f(x1)>0){
    xu1=x1;
    while(f(x2)>0 && f(x2)<f(x1)){
      xu1=x2;
      x2--;
    }
     while(f(x3)>0 && f(x3)<f(x1)){
       xu1=x3;
       x3++;
     }
     xl1=xu1-1;
     }


  else if(f(x1)<0){
    while(f(x2)<=0 && f(x2)>f(x1)){
      xl1=x2;
      x2--;
     }
     while(f(x3)<=0 && f(x3)>f(x1)){
       xl1=x3;
       x3++;
    }
    xu1=xl1+1;
  }
  else{
    cout<<"you got right at choice"<<endl;
  xu1=x1;
  xl1=x1;
  }
      xl=xl1;
      xu=xu1;
     //we get xl,xu
     //condition for not taking exact root
      if(f(xl)==0){xl--;}
      if(f(xu)==0){xu++;}
      xil=xu;
      xi=xl;
      //we got xi

     while(EA>=ES && i>0){
      double  xi_1old;
 xi_1=xi-(f(xi)*(xil-xi))/(f(xil)-f(xi));
      cout<<"iteration number "<<i<<endl;
      cout<<"   xil="<<xil<<endl;
      cout<<"f(xil)="<<f(xil)<<endl;
      cout<<"    xi="<<xi<<endl;
      cout<< "f(xi)="<<f(xi)<<endl;
      cout<<"  xi_1="<<xi_1<<endl;
      EA=abs(((xi_1-xi_1old)/xi_1)*100);
      cout<<"   EA="<<EA<<endl;
      xi_1old=xi_1;
      xil=xi;
      xi=xi_1;
      cout<<"\n\n";
  i++;
     }
     cout<<"our aprox root is "<<xi_1<<endl;
   }
