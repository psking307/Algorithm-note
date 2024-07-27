#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector< vector<int> >& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    vector<int> ans;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main(){
	int m, n;
	cin >> m >> n;
	vector< vector<int> > matrix(m , vector<int>(n, 0));
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> matrix[i][j];
		}
	}
	vector<int> ans = spiralOrder(matrix);
	for(int k = 0 ; k < ans.size()  ; k ++){
		cout << ans[k] << " ";
	}
	return 0;
}
