#include<bits/stdc++.h>
using namespace std;
int smallestCharCount(string x){
    int countArr[26] = {0};
    for(int i=0;i<x.size();i++){
        countArr[(int)x[i] - 97] +=1;
    }
    for(int i = 0;i<26;i++){
        if(countArr[i]>0) return countArr[i];
    }
}
vector<int> computefn(vector<string> A,vector<string> B){
    vector<int> Amin;
    vector<int> Bmin;
    for(auto x : A){
        int n = smallestCharCount(x);
        Amin.push_back(n);
    }
    for(auto x : B){
        int n = smallestCharCount(x);
        Bmin.push_back(n);
    }
    vector<int> finalArr;
    for(auto x : Bmin){
        int temp = 0;
        for(auto y : Amin){
            if(x>y) temp++;
        }
        finalArr.push_back(temp);
    }
    return finalArr;
}
vector<string> splitter(string A){
    string temp = "";
    vector<string> Astr;
    for(int i=0;i<A.size()+1;i++){
        if(A[i]==',' || A[i]==' ' || i== A.size()){
            Astr.push_back(temp);
            temp = "";
        }else{
            temp+=A[i];
        }
    }
    return Astr;
}
int main(){
    string A = "abcd,aabc,bd";
    string B = "aaa,aa";
    vector<string> Astr = splitter(A);
    vector<string> Bstr = splitter(B);
    vector<int> res = computefn(Astr,Bstr);
    for(auto x : res) cout<<x<<" ";
    return 0;
}
