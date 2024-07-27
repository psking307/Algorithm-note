#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
	int slow = 0;
	for(int fast = 0 ; fast < nums.size() ; fast ++){
		if(nums[slow] != nums[fast]){
			nums[++ slow] = nums[fast];
		}
	}
	return ++slow;
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
	int ans = removeDuplicates(nums);
	for(int i = 0 ; i < ans ; i++){
		cout << nums[i] << " "; 
	}
	cout << endl << ans;
	return 0;
}
