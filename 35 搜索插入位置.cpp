#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
	int Search(vector<int>& nums, int target);
};

Solution::Search(vector<int>& nums, int target){
	int left = 0;
	int right = nums.size() - 1;
	while(left <= right){
		int middle = (left + right) / 2;
		if(nums[middle] > target ){
			right = middle - 1;
		}else if(nums[middle] < target){
			left = middle + 1;
		}else{
			return middle;
		}
	}
	return right + 1;
}

int main(){
	vector<int> arr;
	int n;
	// 不一定是4 以后再改 
	for(int i = 1 ; i <= 4 ; i++){
		cin >> n;
		arr.push_back(n);
	}
	Solution p;
	int t;
	cin >> t;
	cout << p.Search(arr , t);
}
