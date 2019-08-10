// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	string s;
// 	long long int t,i=0,c=0,n=0;
    
// 	cin>>t;
// 	for(int j=0;j<t;j++){
// 		cin>>s;

// 		n=s.size();
// 		cout<<n<<"is the size of string"<<endl;
		
// 		for(i=0;i<n;i++){
			
// 				if(s[i]=='0'){
// 					i++;
					
// 				}
// 				else if(s[i]=='1'){
// 					 s[i]='p';
// 					 // cout<<s[i]<<" if first element is 1"<<endl;
// 					if(i<n-1 && s[i+1]=='0' ){
// 						s[i+1]='1';
// 						// cout<<s[i+1]<<" after the first element is one"<<endl;
// 					}

// 					else if(i<n-1 && s[i+1]=='1' ){
// 						s[i+1]='0';
// 			            }

// 					if(i>0 && s[i-1]=='0'){
// 						s[i-1]='1';
// 						i--;
// 					}
// 					if(i>0 && s[i-1]=='1'){
// 						s[i-1]='0';
// 					}
// 				}
				
//            }
		    
// 		    for(int i=0;i<n;i++){
// 			if(s[i]!='p'){
// 				c=1;
	
// 			}
// 		}
          
//           if(c==1){
//           	cout<<"LOSE"<<endl;
//           }
//           else
//           	cout<<"WIN"<<endl;
		
// 	}

// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long int t,i=0,c=0,odd=0,even=0;
	int n=0;
    
	cin>>t;
	for(int j=0;j<t;j++){
		cin>>s;
		i=0;
		odd=0;
		even=0;

	  while(s[i]!='\0'){
	      if(s[i]=='0'){
	          odd++;
	      }
	      if(s[i]=='1'){
	          even++;
	      }
	      i++;
	  }
          // cout<<even<<" is the number of ones"<<endl;
          // cout<<odd<<" is the number of odd"<<endl;
          if(even%2==0){
          	cout<<"LOSE"<<endl;
          	
          }
          else
          	cout<<"WIN"<<endl;
		
	}

	return 0;
}