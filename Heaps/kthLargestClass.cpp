#include<bits/stdc++.h>
using namespace std;
class kthLargest{
    private:
    priority_queue<int,vector<int>,greater<int>>pq;
    int k;

    public:
        kthLargest(int k,vector<int>nums){
            this->k=k;

            for(auto it:nums){
                pq.push(it);
                if(pq.size()>k) pq.pop();
            }
        }

        int add(int val){
            pq.push(val);
            if(pq.size()>k) pq.pop();

            return pq.top();
        }
};


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>el(n);
    for(int i=0;i<n;i++){
        cin>>el[i];
    }

    kthLargest obj(k,el);
    int m;
    cin>>m;
    vector<int>ans;
    int i=0;
    while(m--){
        int val;
        cin>>val;
       int y= obj.add(val);
        ans.push_back(y);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
}