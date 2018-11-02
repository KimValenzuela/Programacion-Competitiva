#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, q;
	cin>>n;
	int nn[n];
	for(int i=0 ; i<n ; i++){
		cin>>nn[i];
	}
	cin>>q;
	int qq[q];
	for(int i=0 ; i<q ; i++){
		cin>>qq[i];
	}
	for(int i=0 ; i<q ; i++){
		int mayor = 0, menor = 0;
		for(int j=0 ; j<n ; j++){
			if(qq[i] > nn[j]) menor = nn[j];
			if(qq[i] < nn[j]){
				mayor = nn[j];
				break;
			}
		}
		if(menor == 0) cout<<"X ";
		else cout<<menor<<" ";
		if(mayor == 0) cout<<"X "<<endl;
		else cout<<mayor<<endl;
	}
	
	return 0;
}
