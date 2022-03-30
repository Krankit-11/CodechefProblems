#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		float k=(y1/x1);
		float k2=(y2/x2);
		if(k<k2){
			cout<<-1<<endl;
		}
		else if(k == k2){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
//		cout<<k<<k2<<endl;
	}
}
