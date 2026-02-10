#include<iostream>
#include <cmath>
using namespace std;


void Roots(int a,int b,int c){
    int d=((b*b)-(4*a*c));
    int sqrt_val=sqrt(abs(d));

    if(d>0){
        double root1=(double)(-b+sqrt_val)/(2.0*a);
        double root2=(double)(-b-sqrt_val)/(2.0*a);
        cout<<root1<<"\n"<<root2<<endl;
    }
    if(d==0){
         double root1=(-b)/(2.0*a);
        double root2=(double)(-b)/(2.0*a);
        cout<<root1<<"\n"<<root2<<endl;
    }
    
  if(d<0){
       cout << -(double)b / (2.0* a) << " + i" << (sqrt_val)/(2.0*a)
            << "\n"
            << -(double)b / (2.0 * a) << " - i" << (sqrt_val)/(2.0*a);
    }
    }
    

int main()
{
    // int a = 1, b = -3, c = -10;        
    int a = 1, b = 1, c = 1;        
    Roots(a, b, c);
 
    return 0;
}