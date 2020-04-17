#include<bits/stdc++.h>
using namespace std;
bool is_isomorphic(string input1, string input2)
{
    int n = input1.length();
    if(n!=input2.length()) return false;
    map<char,char> s;
    map<char,int> exclusive;
    s.insert(pair<char,char>(input1[0],input2[0]));
    exclusive.insert(pair<char,int>(input2[0],1));
    for(int i =1;i<n;i++){
        if(s.count(input1[i])){
            if(input2[i] != s.find(input1[i])->second){
                return false;
            }
        }else if(s.count(input1[i])==0){
            if(exclusive.count(input2[i])) return false;
            else{
                s.insert(pair<char,char>(input1[i],input2[i]));
                exclusive.insert(pair<char,int>(input2[i],1));
            }
        }
    }
    return true;
}
int main() {
	int t;cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1;cin>>s2;
	    cout<<is_isomorphic(s1,s2);
	    cout<<"\n";
	}
	return 0;
}
