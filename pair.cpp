#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,n,a[1000];

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>x;
	int min=INT_MAX;
	int p;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum=a[i]+a[j];
			int dif=abs(x-sum);
			if(min>dif){
              min=dif;
               p=sum;
			}
		}
	}
	cout<<p<<endl;
	return 0;
}