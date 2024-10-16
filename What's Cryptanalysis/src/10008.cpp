#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,i,count[200]={0},k,l;
	cin>>n;
	getchar();
	char c,str[1000];
	for(int i=0;i<n;i++){
		gets(str);
		for(int j=0;j<strlen(str);j++){
			c=str[j];
			if(c>='a'&&c<='z'){
				c-=32;
			}
			if(c>='A'&&c<='Z') ++count[c]; 
		}
		
	}
	
	for(k=sizeof(str);k>=1;k--){
		for(l='A';l<='Z';l++){
			if(count[l]==k){
				cout<<(char)l<<" "<<k<<endl;
			}
		}
	}
	
	
	
	return 0;
} 
