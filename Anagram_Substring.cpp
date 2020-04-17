#include<bits/stdc++.h>
using namespace std;
bool compare(int count1[],int count2[]){
  for(int i = 0;i<26;i++) if(count1[i]!=count2[i]) return false;
  return true;
}
void search(string text,string pattern,int& count){
  int k = pattern.length(),n = text.length();
  int countP[26] ={0};
  for(int i = 0;i<k;i++) countP[(int)pattern[i] - 65]+=1;
  int i = 0;
  while(i!=(n-k+1)){
    int countT[26] ={0};
    for(int j = i;j<k+i;j++) countT[(int)text[j] - 65]+=1;
    if(compare(countP,countT)){count +=1;}
    i++;
  }
}
int main(){
  //to print out the locations they match(index to be precise)
  int t;cin>>t;
  while(t--){
    string text,pattern;
    cin>>text;
    cin>>pattern;
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    transform(pattern.begin(), pattern.end(), pattern.begin(), ::toupper);
    int count =0;
    search(text,pattern,count);//considering len(text)>len(pattern)
    cout<<count<<"\n";
  }
  return 0;
}
