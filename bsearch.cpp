#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=7;
  int arr[n] = {1,2,3,4,5,6,10};
  int a = 0;
  int b = n-1;
  int s = 2;
  while(a<=b)
  {
    int mid = (a+b)/2;
    if (s == arr[mid])
    {
      cout<<"Search term is found at location : "<<mid+1<<'\n';
      break;
    }
    else
    {
      if(s<arr[mid])
      {
        b = mid - 1;
      }
      else
      {
        a = mid + 1;
      }
    }
  }
}
