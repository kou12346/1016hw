#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	int m[10000]={0},a;
	while(cin>>n){
		m[i]=n;
		for(int k=1;k<=i;k++){
			for(int j=k+1;j<=i;j++){
				if(m[k]>m[j]){
					int d;
					d=m[j];
					m[j]=m[k];
					m[k]=d;
				}
			}
		}
		if(i==1){cout<<m[i]<<endl;
		}
		 
		else if(i%2==0){ //°¸¼Æ 
			
			
			cout<<(m[i/2]+m[i/2+1])/2<<endl;
		}
		else {
			
			cout<<m[i/2+1]<<endl;
		}
		i++;
	}
	return 0;
}
