//https://practice.geeksforgeeks.org/problems/josephus-problem/1
#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k);
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}
int josephus(int n, int k)
{
    vector<int> people;
    for(int i=0;i<n;i++) people.push_back(i+1);
    k -=1;
    int i = k;
    while(people.size()!=2){
        i = (i % people.size());
        people.erase(people.begin() + i);
        i +=k;
    }
    if(i%2 == 0) return people[1];
    else return people[0];
}
