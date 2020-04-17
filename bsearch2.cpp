#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k = 0;
  int array[10] = {3,4,5,6,7,8,9,10,11,12};
  int n = 10;
  int x = 6;
  for (int i = n/2; i >= 1; i /= 2) {
    while (k+i < n && array[k+i] <= x)
      k += i;
    cout<<"i is :"<<i<<" k is : "<<k<<'\n';
    if (array[k] == x) {
      cout<<"Search term is found at location : "<<k+1<<'\n';
      break;
      }
    }
}
