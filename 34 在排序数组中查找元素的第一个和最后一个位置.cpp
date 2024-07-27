#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBorder = getLeftBorder(nums, target);
        int rightBorder = getRightBorder(nums, target);
        if (leftBorder == -2 || rightBorder == -2) return {-1, -1};
        if (rightBorder - leftBorder > 1) return {leftBorder + 1, rightBorder - 1};
        return {-1, -1};
    }
private:
     int getRightBorder(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int rightBorder = -2; 
        while (left <= right) {
            int middle = left + ((right - left) / 2);
            if (nums[middle] > target) {
                right = middle - 1;
            } else { 
                left = middle + 1;
                rightBorder = left;
            }
        }
        return rightBorder;
    }
    int getLeftBorder(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int leftBorder = -2; 
        while (left <= right) {
            int middle = left + ((right - left) / 2);
            if (nums[middle] >= target) { 
                right = middle - 1;
                leftBorder = right;
            } else {
                left = middle + 1;
            }
        }
        return leftBorder;
    }
};

int main(){
	vector<int> arr;
	int n; 
	for(int i = 1 ; i <= 6 ; i++){
		cin >> n;
		arr.push_back(n);
	}
	Solution p;
	int t;
	cin >> t;
	cout << p.searchRange(arr, t)[0] << p.searchRange(arr, t)[1] << endl;
    return 0;
}
