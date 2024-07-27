#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
	unordered_map <int, int> map;
	for(int i = 0 ; i < nums.size() ; i++){
		auto iter = map.find(target - nums[i]);
		if(iter != map.end()){
			return {iter->second, i};
		}
		map.insert(pair<int , int> (nums[i] , i) );
	}
	return {};
}

int main(){
	int size;
	cin >> size;
	vector<int> nums;
	for(int i = 0 ; i < size ; i++){
		int element;
		cin >> element;
		nums.push_back(element);
	}
	int target;
	cin >> target;
	vector<int> ans = twoSum(nums, target);
	for(int i = 0 ; i < ans.size() ; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
