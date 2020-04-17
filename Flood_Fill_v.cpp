#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
void prm(vector<vi>& matrix)
{
  for(auto x:matrix){
    for(auto y:x){
      cout<<y<<" ";
    }cout<<"\n";
  }
}
void rec_func(vector<vi>& matrix,int i,int j)
{
  if(i<0 || i>7 || j<0 || j>7) return ;
  if(matrix[i][j] == 8) return;
  if(matrix[i][j] != 2) return;
  else matrix[i][j] = 8;
  rec_func(matrix,i+1,j);
  rec_func(matrix,i,j+1);
  rec_func(matrix,i-1,j);
  rec_func(matrix,i,j-1);
}
int main()
{
  vector<vi> matrix({{1, 1, 1, 1, 1, 1, 1, 1},
                              {1, 1, 1, 1, 1, 1, 0, 0},
                              {1, 0, 0, 1, 1, 0, 1, 1},
                              {1, 2, 2, 2, 2, 0, 1, 0},
                              {1, 1, 1, 2, 2, 0, 1, 0},
                              {1, 1, 1, 2, 2, 2, 2, 0},
                              {1, 1, 1, 1, 1, 2, 1, 1},
                              {1, 1, 1, 1, 1, 2, 2, 1},});
  rec_func(matrix,4,4);
  prm(matrix);
  return 0;
}
