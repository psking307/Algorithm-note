#include<iostream>
#include<vector>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums){
	int slow = 0;
	int ans = INT32_MAX;
	int sum = 0;
	int sublength = 0;
	for(int fast = 0 ; fast < nums.size() ; fast ++){
		sum += nums[fast]; 
		while(sum >= target){
			sublength = fast - slow + 1;
			ans = ans < sublength ? ans : sublength;
			sum -= nums[slow++];
		}
	}
	return ans == INT32_MAX ? 0 : ans;
}

int main(){
	int size;
	cin >> size;
	vector<int> nums;
	int element;
	for(int i = 0 ; i < size ; i ++){
		cin >> element;
		nums.push_back(element);
	}
	int target;
	cin >> target;
	int ans = minSubArrayLen(target , nums);
	cout << ans;
	return 0;
}
