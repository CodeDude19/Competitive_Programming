#include<bits/stdc++.h>
using namespace std;
int main()
{
  unordered_map<string,int> m {{"a",0},{"e",1},{"i",2},{"o",3},{"u",4}};
  for(auto x:m)
  {
      cout<<x.first<<" : "<<x.second<<'\n';
  }

  return 0;
}
