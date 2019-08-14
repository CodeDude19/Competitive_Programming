#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define loop(i,a,b) for(int i = a;i<b;i++)
using namespace std;
int main()
{
  vector<string> crossword(10);
  string sentence,temp;
  vector<string> words;
  for (int i = 0; i < 10; i++) {
      string crossword_item;
      getline(cin, crossword_item);
      crossword[i] = crossword_item;
  }
  getline(cin,sentence);
  for(auto x : sentence){
    if(x == ';'){
      words.push_back(temp);
      temp = "";
    }else{
      temp +=x;
    }
  }words.push_back(temp);


  return 0;
}
