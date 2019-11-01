#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		vector<string>s;
		int z=n;
		while(z--){
			string x;
			cin>>x;
			s.push_back(x);
        }

        for(int i=0;i<n-1;i++){
        	
        	string x=s[i];
        	
        	string y=s[i+1];
        
        	string res="";
        	
            for(int j=0;j<10;j++){
                 if(x[j]==y[j]){
                 	res=res+'0';
                 }
                 else
                 	res=res+'1';
                 // cout<<"resultanat string "<<res<<endl;
            }
        	 
        	 
        	 s[i+1]=res;
         }
           string x=s[n-1];
           cout<<x<<endl;
           int count=0;
         
        
         for(int i=0;i<10;i++){
         	if(x[i]=='1'){
         		count++;
         	}

         }
         cout<<count<<endl;
         s.clear();
         
	}
}