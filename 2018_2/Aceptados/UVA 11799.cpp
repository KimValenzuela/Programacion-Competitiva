#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int nn[n];
	int mayor;
	int may[n];
	
	for(int i=0 ; i<n ; i++){
		cin>>nn[i];
		int m = nn[i];
		int mm[m];
		mayor = 0;
		for(int j=0 ; j<m ; j++){
			cin>>mm[j];
			if(mm[j] > mayor) mayor = mm[j];
			may[i] = mayor;
		}
	}
	
	for(int i=0 ; i<n ; i++){
		cout<<"Case "<<i+1<<": "<<may[i]<<endl;
	}
	
	
	return 0;
}
