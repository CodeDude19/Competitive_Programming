#include<bits/stdc++.h>
#define k 1000000007
typedef long long ll;
using namespace std;
ll arr[1000001];
ll prefetcher(){
    arr[1]=1;
    for(ll i = 2;i<=1000000;i++){
        ll tempy = ((arr[i-1]%k) * ((i%k)%k)) + (arr[i-1]%k) + (i%k);
        arr[i] = tempy%k;
    }
}
int main(){
    prefetcher();
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<arr[n]<<"\n";
    }
    return 0;
}