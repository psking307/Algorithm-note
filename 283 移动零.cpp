#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums){
	int slowIndex = 0;
	for(int fastIndex = 0 ; fastIndex < nums.size() ; fastIndex ++){
		if(nums[fastIndex] != 0){
			nums[slowIndex ++] = nums[fastIndex];
		}			
	}
	for(int i = slowIndex ; i < nums.size() ; i ++){
		nums[i] = 0;
	}
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
	moveZeroes(nums);
	for(int i = 0 ; i < size ; i++){
		cout << nums[i] << " "; 
	}
	return 0;
}
