#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n1, n2;	
	while(cin>>n1>>n2, n1){
		multiset<int> nn1;
		multiset<int> nn2;
		multiset<int> cont;
		
		int var;
		for(int i=0 ; i<n1+n2 ; i++){
			cin>>var;
			if(i < n1) nn1.insert(var);
			else nn2.insert(var);
		}
		int mon = 0;
		multiset<int>::iterator it1, it2;
		for(it1=nn1.begin() ; it1!=nn1.end() ; it1++){
			for(it2=nn2.begin() ; it2!=nn2.end() ; it2++){
				if(*it2 >= *it1){
					cont.insert(*it2);
					mon += *it2;
					nn2.erase(it2);
					break;
				}
			}
		}
		if(cont.size() >= nn1.size()){
			cout<<mon<<endl;
		}else cout<<"Loowater is doomed!"<<endl;
	}
	
	return 0;
} 



