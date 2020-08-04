#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n>62) cout<<"NO\n";
        else{
        	set<long long> or_results;
        	for(int i=0;i<n;i++){
        		long long orsum = 0;
        		for (int j = i; j < n; j++) {
          			orsum |= arr[j];
          			or_results.insert(orsum);
        		}
        	}
        	if (or_results.size() == n * (n + 1) / 2) {
		        cout << "YES\n";
		    } else {
		        cout << "NO\n";
		    }
        } 
    }
    return 0;
}