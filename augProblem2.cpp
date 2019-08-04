#include<bits/stdc++.h>
using namespace std;

// code chef aug problem 2//
int main(){
	int t,n,k;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k;
		int c=n/k;
		if(c%k==0){
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
	return 0;
}