#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
		int mat[n][n];
		for(int i=n;i>=0;i--){
			for(int j=0;j<n;j++){
				cin>>mat[j][i];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) 
				cout<<mat[i][j]<<" ";
			cout<<"\n";
		}
    }
	

	return 0;
}