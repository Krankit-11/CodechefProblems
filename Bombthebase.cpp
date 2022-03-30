#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,count=0;
		cin>>n>>x;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]<x){
				count=i;
//				continue;
			}
			else{
				continue;
			}
		}
		cout<<count<<endl;
	}
//	cout<<count<<endl;
}
