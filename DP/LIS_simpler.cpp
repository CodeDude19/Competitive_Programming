#include<bits/stdc++.h>
using namespace std;
int lisfn(int arr[],int n){
  int arr1[n] = {0};
  for(int i=0;i<n;i++) arr1[i] = 1;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(arr[i]>arr[j]) arr1[i] = max(arr1[j]+1,arr1[i]);
    }
  }
  cout<<*max_element(arr1,arr1 + n)<<"\n";
}
int main(){
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
      cin>>arr[i];
    }
    lisfn(arr,n);
  }

  return 0;
}
