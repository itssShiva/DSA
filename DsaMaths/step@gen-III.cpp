// Replace number into special words
// {note--0 is not present in the number}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string a[]={"Ane","Bow","Chree","Dour","Eive","Fix","Geven","Hight","Iine"};
    vector<string>temp;
    string result="";
    int x=45321;
    while(x!=0){
        int digit=x%10;
       temp.push_back(a[digit-1]);
        x/=10;
    }
    reverse(temp.begin(),temp.end());
   for(auto ch:temp){
    result+=ch;
   }
   cout<<result;
}