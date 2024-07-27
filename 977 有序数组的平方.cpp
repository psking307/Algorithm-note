#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
	int right = nums.size() - 1;
	int left = 0; 
	vector<int> reverseAns;
	while(left <= right){
		if(nums[left] * nums[left] <= nums[right] * nums[right]){
			reverseAns.push_back(nums[right] * nums[right]) ;
			right --;
		}else{
			reverseAns.push_back(nums[left] * nums[left]) ;
			left ++;
		}
	}
	vector<int> ans;
	for(int i = nums.size() - 1 ; i >= 0 ; i--){
		ans.push_back(reverseAns[i]) ;
	}
	return ans;
}

int main(){
	int size;
	cin >> size;
	vector<int> nums;
	int element;
	for(int i = 0 ; i < size ; i++){
		cin >> element;
		nums.push_back(element); 
	}
	vector<int> ans = sortedSquares(nums);
	for(int i = 0 ; i < size ; i++){
		cout << ans[i] << " "; 
	}
	return 0;
}
