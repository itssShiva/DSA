#include <bits/stdc++.h> 
using namespace std;

int main() {
	unordered_map<string,int>mpp;
	int totalIncome;
	int totalExpenses=0;
	cin>>totalIncome;
	vector<string>order;
	while(true){
		string s;
		int value;
		cin>>s;
		if(s=="done") break;
		if(mpp.find(s)==mpp.end()) order.push_back(s);
		cin>>value;
		mpp[s]+=value;
	}
	for(auto it:mpp){
		totalExpenses+=it.second;
	}
	cout<<"Total Income: "<<totalIncome<<endl;
	cout<<"Total Expenses: "<<totalExpenses<<endl;
	cout<<"Total Savings: "<<(totalIncome-totalExpenses)<<endl;
	for(auto it:order){
		cout<<it<<": "<<mpp[it]<<endl;
	}
	return 0;
}