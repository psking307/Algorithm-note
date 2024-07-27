#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums){
	int left = -1;
	int right = nums.size() - 1;
	while(left + 1 < right){
		int mid = (left + right)/2;
		if(nums[mid] < nums.back()){
			right = mid; 
		}else{
			left = mid;
		}
	}
	return nums[right];
}


int main(){
	int n;
	cin >> n;
	vector<int> arr;
	for(int i = 0 ; i < n ; i ++){
		int a;
		cin >> a;
		arr.push_back(a);
	}
	cout << findMin(arr);
	return 0;
}

