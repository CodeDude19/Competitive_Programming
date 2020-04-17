#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<string> arr = {"ba","cd","dc","ab"}; //intializing a vector string array
  cout<<"Array before Sorting:\n";
  for(int i = 0;i<arr.size();i++)
  {
    cout<<arr[i]<<"\n";
  }
  arr.push_back("hel"); // this is a way to enter a value at the back of the array
  cout<<"Array after Sorting:\n";
  sort(arr.begin(),arr.end()); // sort function for vector arrays in stl but use sort(a,a+n) for normal arrays
  for(int i = 0;i<arr.size();i++)
  {
    cout<<arr[i]<<"\n";
  }

}
