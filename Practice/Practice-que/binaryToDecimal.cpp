#include<math.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number in binary: ";
    cin>>n;
    int ans=0;
    int i=0;
    while (n!=0)
    {
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<"Number in decimal form: "<<ans;
    
}