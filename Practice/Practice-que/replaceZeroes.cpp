#include<iostream>
using namespace std;

int replaceZerosWithOnes(int n){
    int ans=0;
    int temp=1;
    while(n>0){
        int digit=n%10;
        if(digit==0){
            digit=1;
        }
        ans=digit*temp+ans;
        n/=10;
       temp= temp*10;

    }
    return ans;
}


int main() {
   int n = 204;
   int result = replaceZerosWithOnes(n);
   cout << "After replacing zeros with ones " << n << " becomes " << result;
}