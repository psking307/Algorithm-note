#include<iostream>
#include<vector>
using namespace std;

vector< vector<int> > generateMatrix(int n){
	vector< vector<int> > ans(n, vector<int>(n, 0));
	int startx = 0, starty = 0;
	int loop = n/2;
	int mid = n/2;
	int count = 1;
	int offset = 1;
	int i,j;
	while(loop --){
		i = startx;
		j = starty;
		for(j ; j < n - offset ; j++){
			ans[i][j] = count ++;
		}
		for(i ; i < n - offset ; i++){
			ans[i][j] = count ++;
		}
		for(j ; j > starty ; j --){
			ans[i][j] = count ++;
		}
		for(i ; i > startx ; i --){
			ans[i][j] = count ++;
		}
		startx ++;
		starty ++;
		offset ++;
	}
	if(n%2){
		ans[mid][mid] = count;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	vector< vector<int> > ans = generateMatrix(n);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cout<< ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
