#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int suma = 0;
	if(n>0){
		for(int i=1 ; i<=n ; i++){
			suma+=i;
		}
	}else{
		for(int i=n ; i<=1 ; i++){
			suma+=i;
		}
	}
	
	cout<<suma;
	return 0;
}
