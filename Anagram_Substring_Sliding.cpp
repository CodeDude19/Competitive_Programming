#include<bits/stdc++.h>
using namespace std;
bool compare(int count1[],int count2[]){
  for(int i = 0;i<26;i++) if(count1..[i]!=count2[i]) return false;
  return true;
}
void search(string text,string pattern,int& count){
  int k = pattern.length(),n = text.length();
  int countP[26] ={0},countT[26]={0};
  for(int i = 0;i<k;i++){
    countP[(int)pattern[i] - 65]+=1;
    countT[(int)text[i] - 65]+=1;
  }
  for(int i=k;i<n;i++){
    if(compare(countP,countT)) count+=1;
    countT[(int)text[i] - 65]+=1;...,,,
    countT[(int)text[i-k] - 65]-=1;
  }if(compare(countP,countT)) count+=1;
}
int main()
{
  string text="uityii",pattern="i";
  transform(text.begin(), text.end(), text.begin(), ::toupper);
  transform(pattern.begin(), pattern.end(), pattern.begin(), ::toupper);
  int count =0;
  search(text,pattern,count);//considering len(text)>len(pattern)
  cout<<count<<"\n";
  return 0;
}
