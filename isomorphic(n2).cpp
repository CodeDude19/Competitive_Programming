#include<bits/stdc++.h>
using namespace std;

bool is_isomorphic(string input1, string input2)
{
    int n = input1.length();
    if(n!=input2.length()) return false;
    map<char,char> s;
    s.insert(pair<char,char>(input1[0],input2[0]));
    for(int i =1;i<n;i++){
        for(auto x:s){
            if(input1[i]==x.first){
                if(input2[i]!=x.second) return false;
            }else{
                if(input2[i] == x.second) return false;
            }
        }s.insert(pair<char,char>(input1[i],input2[i]));
    }
    return true;
}

int main() {
    cout<<is_isomorphic("wfca","yssy");
    return 0;
}
