#include<bits/stdc++.h>
using namespace std;
int matrix[100][100];
void prm(int row, int coln)
{
  for(int i=0;i<row;i++){for(int j=0;j<coln;j++)cout<<matrix[i][j]<<" ";}
  cout<<"\n";
}
void rec_func(int i,int j,int num,int target,int row,int coln)
{
  if(i<0 || i>row || j<0 || j>coln) return ;
  if(matrix[i][j] == target) return;
  if(matrix[i][j] != num) return;
  else matrix[i][j] = target;
  rec_func(i+1,j,num,target,row,coln);
  rec_func(i,j+1,num,target,row,coln);
  rec_func(i-1,j,num,target,row,coln);
  rec_func(i,j-1,num,target,row,coln);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int row,coln,x,y,target,num;
    cin>>row>>coln;
    for(int i=0;i<row;i++){for(int j=0;j<coln;j++){int temp;cin>>temp;matrix[i][j]=temp;}}
    cin>>x>>y>>target;
    num = matrix[x][y];
    rec_func(x,y,num,target,row,coln);
    prm(row,coln);
  }
  return 0;
  // int[][8] matrix({{1, 1, 1, 1, 1, 1, 1, 1},
  //                 {1, 1, 1, 1, 1, 1, 0, 0},
  //                 {1, 0, 0, 1, 1, 0, 1, 1},
  //                 {1, 2, 2, 2, 2, 0, 1, 0},
  //                 {1, 1, 1, 2, 2, 0, 1, 0},
  //                 {1, 1, 1, 2, 2, 2, 2, 0},
  //                 {1, 1, 1, 1, 1, 2, 1, 1},
  //                 {1, 1, 1, 1, 1, 2, 2, 1},});
}
