  #include<bits/stdc++.h>
  using namespace std;
  int paths(int m,int n)
  {
  if(m==1||n==1)
  return 1;
  int x = paths(m-1,n)+paths(m,n-1);
  return x;
  }
  int main()
  {
    int t,m,n;
    cin>>t;
    while(t--)
    {
      cin>>m>>n;
      cout<<paths(m,n)<<"\n";
    }
    return 0;
  }
