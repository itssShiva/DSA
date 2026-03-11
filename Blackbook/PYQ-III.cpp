#include <bits/stdc++.h> 
using namespace std;

int main() {
	string s;
	getline(cin,s);
	if(s.size()==0){
		cout<<"Invalid Input";
		return 0;
	}
	unordered_map<char,int>mpp;
	map<char,int>mpp2;
	for(char ch:s){
		mpp[ch]++;
		mpp2[ch]++;
	}
	char firstC='0';
	char secondC;
	int maxFreq=0;
	for(auto it:mpp){
		if(it.second==1){
			firstC=it.first;

		}
	}
	for(auto it:mpp2){
		if(it.second>maxFreq){
			maxFreq=it.second;
			secondC=it.first;
		}
	}
	if(firstC=='0'){
		cout<<"None"<<" "<<secondC;
	}
	else{
		cout<<firstC<<" "<<secondC;
	}
	return 0;
}