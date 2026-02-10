//  Given a number, output words mapped for each digit (mapping 1->One, 2->Two...). Skip ze
//  ros.

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    string a[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    string result="";
    vector<string>temp;
    cout<<"Enter number: "<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        temp.push_back(a[digit-1]);
        n/=10;
    }
    reverse(temp.begin(),temp.end());
    for(auto it:temp){
       cout<<it;
    }
}