#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos;
	cin>>casos;
	int n;
	int length;
	while(casos){
		cin>>length>>n;
		int m[n];
		for(int i=0 ; i<n ; i++){
			cin>>m[i];
		}
		if(!length) cout<<"YES"<<endl;
		else{
			int flag = 0;
			for(int i=0 ; i<(1<<n) ; ++i){
				int sum = 0;
				for(int j=0 ; j<n ; ++j){
					if(i & (1<<j)){
						sum += m[j];
						if(sum == length){
							flag = 1;
						}
					}
				}
			}
			if(flag) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		casos--;
	}
	
	
	return 0;
}
