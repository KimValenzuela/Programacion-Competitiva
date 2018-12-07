#include <bits/stdc++.h>

using namespace std;
 
int main (){
    int n;
 
    while(cin>>n && n) {
 
        int nn[13]; 
        for(int i=0 ; i<n ; i++) cin>>nn[i]; 
 		
        for(int a=0 ; n-a>5 ; a++) { 
            for(int b=a+1 ; n-b>4 ; b++) {
                for(int c=b+1 ; n-c>3 ; c++) {
                    for(int d=c+1 ; n-d>2 ; d++) {
                        for(int e=d+1 ; n-e>1 ; e++) {
                            for(int f=e+1 ; n-f>0 ; f++) {
                                cout<<nn[a]<<" "<<nn[b]<<" "<<nn[c]<<" "<<nn[d]<<" "<<nn[e]<<" "<<nn[f]<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
 
    return 0;
}
