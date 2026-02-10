//  Given number, check if it's palindrome after mapping digits to characters.

#include<iostream>
#include<vector>
using namespace std;

bool checkPallindrome(string result){
    int n=result.size();
    for(int i=0;i<n/2;i++){
        if(result[i]!=result[n-i-1])return false;
    }
    return true;
}
int main()
{
    string a[]={"One","Two","Three","Four","Five","Six","madam","Eight","Nine"};
    int n;
    string result="";
    vector<string>temp;
    cout<<"Enter number: "<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
         temp.insert(temp.begin(),a[digit-1]);
        n/=10;
    }
    for(auto it:temp){
       result+=it;
    }
    if(checkPallindrome(result)){
        cout<<"Hai bhai!!";
    }
    else{
        cout<<"NAhi hai bhai!!";
    }
}