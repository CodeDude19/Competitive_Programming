#include<bits/stdc++.h>
using namespace std;
int main()
{
//   vector<bool> x(10,true);//initializing a vector with all true
//
//   for(bool v: x)
//   {
//     cout<<v;
//   } // for each method !
//
//   set<string> s;
//   for(int i = 0; i<5;i++)
//   {
//     string temp;
//     cout<<"Enter a string:\n>>";
//     cin>>temp;
//     s.insert(temp);
// }
//   for(auto x: s)
//   {
//     cout<<x<<'\n';
// } // set fucntions

  // vector<int> s1 = {1,2,3,3,5,2};
  // for(auto x1:s1)
  // {
  //     cout<<"\nCount of "<<x1<<" is: "<<count(s1.begin(),s1.end(),x1);
  // } // count function in vectors! or count(arr,arr+n,x) for arrays
  set<int> s = {4,2,1,5,8,9};
    auto it = s.lower_bound(3); // returns smallest element whose value is x or more!
    if (it == s.begin()) {
    cout << *it << "\n";
    } else if (it == s.end()) {
    it--;
    cout << *it << "\n";
    } else {
    int a = *it;
    cout<<"a = "<<a<<"\n";
    it--;
    int b = *it;
    cout<<"b = "<<b<<"\n";
    if (3-b <a-3) cout << b << "\n";
    else cout << a << "\n";
    }
}
