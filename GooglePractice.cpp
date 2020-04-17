#include<bits/stdc++.h>
using namespace std;
vector<int> solfn(vector<int> vi,int n){
    vector<vector<int>> temp;
    for(int i = 0;i<(vi.size()-n)+1;i++){
        vector<int> temp2;
        for(int j=i;j<(i+n);j++){
            temp2.push_back(vi[j]);
        }
        temp.push_back(temp2);
    }
    vector<int> res{n,INT_MIN};
    for(auto x : temp){
        for(int i=0;i<n;i++){
            if(x[i]!=res[i]){
                if(x[i]>res[i]) res = x;
                else break;
            }
        }
    }
    return res;
}
int main(){
    vector<int> vi{1,4,3,2,5,9,10};
    int n = 2;
    vector<int> soln = solfn(vi,n);
    for(auto x : soln) cout<<x<<" ";
    return 0;
}
