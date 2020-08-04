#include<bits/stdc++.h>
using namespace std;

struct Boxes{
	int ladderto;
	bool isSnake;
};

int main(){

	int t;
	cin>>t;
	while(t--){
		Boxes boxes[30];
		int dp[30];
		for(int i=0;i<30;i++){
			boxes[i].isSnake=false;
			boxes[i].ladderto = -1;
		}
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(b>a) boxes[a-1].ladderto=b-1;
			else boxes[a-1].isSnake=true;
		}
		dp[0]=0;
		for(int i=1;i<30;i++) dp[i] = -1;
		for(int i=1;i<29;i++){
			for(int j=i;j<=6;j++) if(boxes[j].isSnake==false)dp[j] = 1;

			
		}
	}

	return 0;
}