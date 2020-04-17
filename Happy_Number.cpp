#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    for(int i = n+1; i<(100+n);i++){// check diff numbers
      int sum;
      string dig = to_string(i);
      for(int k = 0 ; k<100;k++){  // to check squares sums and go deeper!
        sum = 0;
        for(int j = 0;j<dig.length();j++){
          int temp = dig[j] - '0';
          sum += temp*temp;
        }
         dig = to_string(sum);
         if(sum == 1)break;
      }
      if(sum == 1){cout<<i<<"\n";break;}
    }
  }
  return 0;
}
