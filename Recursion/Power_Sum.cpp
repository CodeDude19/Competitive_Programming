#include<bits/stdc++.h>
using namespace std;
int powersum(int x,int n,vector<int>& vals)
{
  int s = 0;
  for(int i : vals) s+=pow(i,n); // adding squares
  if(s == x) return 1; // checking if equal
  else{
    int answer = 0;
    int v = vals.empty() ? 1 : vals.back() + 1;
    while((s + pow(v,n)) <= x){
      vals.push_back(v);
      answer +=powersum(x,n,vals);
      vals.pop_back();
      v++;
    }
    return answer;
  }
}
int main(){
  int x = 29, n = 2;
  vector<int> vals;
  cout<<"Number of possibilities are :"<<powersum(x,n,vals);
  return 0;
}
//Note you might be wondering that how is var "answer" being transported recursively to add itself 1 when we find a solution
//its simply that answer is zero at first and then a while loop begins and then it keeps trying out different result but only with the while loop
//and going deeper levels but it returns back and adds either 0 when no soln or 1 when it finds one!
//..its a simple concept of returning to a left off state.Its kinda like memoization where each state is being remembered and
//then its thought about for a solution
