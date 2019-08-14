#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
    loop(i,1,n+1)
    {
      if(chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      search();
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}
int main()
{
  letters.push_back("A");
  letters.push_back("B");
  letters.push_back("C");
  search();
  return 0;
}
