#include <bits/stdc++.h>
using namespace std;
void traverse(vector<int> v)
{
    // vector <int>::iterator it;
    // for(it = v.begin();it != v.end();++it)
    //     cout << *it <<'\n';
    // cout << endl;
    for(int i = 0;i < v.size();++i)
    {
      cout << v[i]<<'\n';
      v[i] +=1;
    }
    cout << endl;
    for(int i = 0;i < v.size();++i)
        cout << v[i]<<'\n';
    cout << endl;
 }
int main()
{
  vector<int> v = {1,2,3,4};
  // traverse(v);
  for(auto x:v)
  {
    cout<<x;
  }

  return 0;
}
