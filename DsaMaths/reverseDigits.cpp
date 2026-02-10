#include <cstdint>
#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
       int digit;
    int reversedNum=0;
    while (x!=0)
    {
          digit=x%10;

          if(reversedNum>INT32_MAX/10||(reversedNum==INT32_MAX/10 &&digit>7))
          return 0;
          if(reversedNum<INT32_MIN/10||(reversedNum==INT32_MIN/10 &&digit<-8))
          return 0;
          
          
        {reversedNum=reversedNum*10+digit;
         x/=10;}
          
    }
    return reversedNum;
        
    }
};
int main(){
    Solution s;
    int n=123;
    int res=s.reverse(n);
    cout<<res;

}