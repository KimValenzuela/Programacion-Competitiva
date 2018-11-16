#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		int nn[n];
	
		multiset<int> set;
	
		for(int i=0 ; i<n ; i++){
			cin>>nn[i];
		}
		int res1;
		for(int i=0 ; i<n-1 ; i++){
			res1 = abs(nn[i] - nn[i+1]);
			set.insert(res1);
		}
	
		int flag = 1;
		multiset<int>::iterator it;
		int i = 1;
		for(it=set.begin() ; it!=set.end() ; it++){
			if(*it != i) flag = 0;
			i++;
		}
	
		if(flag) cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
		}
	
	
	return 0;
}
