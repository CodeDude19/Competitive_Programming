#include<bits/stdc++.h>
using namespace std;
void printar(vector<string> s)
{
  for(int i = 0; i<s.size();i++)
  {
    cout<<s[i]<<'\n';
  }
}
bool comp(string s1,string s2)
{
  if(s1.size()!=s2.size()) return s1.size()<s2.size();
  return s1<s2;
}
int main()
{
  vector<string> s = {"Hello","World","I","am","Yasser"} ;
  printar(s);
  sort(s.begin(),s.end(),comp);
  printar(s);
}
