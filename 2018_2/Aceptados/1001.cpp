#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n[131072];
	int k=0 ;
	while(cin>>n[k]){
		k++;
	}

	for(int i=k-1; i>=0 ; i--){
			cout<<fixed<<setprecision(4)<<(double)sqrt(n[i])<<endl;
		}
	return 0;
}
