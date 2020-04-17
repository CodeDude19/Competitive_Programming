#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define loop(i,a,b) for(int i = a;i<b;i++)
using namespace std;
void search(vi array,int s)
{
  int step = sqrt(array.size());
  int flag = 0;
  for(int i=0;i<array.size();i += step){
    if (array[i] == s){
      cout<<"\nFound at location :"<<i;
      flag = i;
      break;
    }
    else{
      if(array[i]>s){
        flag = i;
        for(int j = flag-step;j<=flag;j++){
          if (array[j] == s) cout<<"\nFound at index :"<<j;
        }break;
      }
    }
  }
  if (!flag) cout<<"\nItem not found!"<<flag;
}
int main()
{
  vi array({1,2,3,4,5,6,7,8,9,99});
  int s = 6;
  search(array,s);
  return 0;
}
