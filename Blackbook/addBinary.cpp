#include<bits/stdc++.h>
using namespace std;
    
    string addBinary(string s1,string s2){
        int a=s1.size();
        int b=s2.size();
        int i=a-1;
        int j=b-1;
        int carry=0;
        string ans="";
        while(i>=0||j>=0||carry!=0){
            int x=0;
            if(i>=0){
                x=s1[i]-'0';
                i--;
            }
            int y=0;
            if(j>=0){
                y=s2[j]-'0';
                j--;
            }
            int sum=x+y+carry;
            ans+=to_string(sum%2);
            carry=sum/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


int main(){
    string s1,s2;
    getline(cin,s1,' ');
    getline(cin,s2);
    string ans=addBinary(s1,s2);
    cout<<ans;
}