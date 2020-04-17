#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int t;
//   cin>>t;
//   while (t--){
//
//     int  m,n;
//     cin>>m>>n;
//     vector<bool>prime(n+1,true);
//     // for(int  i = 2; i<=n;i++)
//     // {
//     //   prime[i] = true;
//     // }
//     for(int  i = 2; i<sqrt(n);i++)
//     {
//         if (prime[i] == true)
//         {
//           for(int  j = i*i; j<=n;j +=i)
//           {
//             prime[j] = false;
//           }
//         }
//     }
//     // cout<<"The prime numbers till "<<n<<" :\n";
//     for(int i = m; i<=n;i++)
//     {
//       if (prime[i] == true)
//       {
//         cout<<i<<'\n';
//       }
//     }
//     cout<<'\n';
//   }
//   return 0;
// }
bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  int d = 2;
  while (d * d <= n) {
    if (n % d == 0) {
      return false;
    }
    d++;
  }
  return true;
}

int main() {
      ios::sync_with_stdio(0);
      cin.tie(0);
  int t, m, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++) {
      if(isPrime(i)) printf("%d\n", i);
    }
  }
  return 0;
}
