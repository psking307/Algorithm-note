#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
		int findPeakElement(vector<int>& nums){
			int left = -1;
			int right = nums.size() - 1;
			while(left +1 < right){
				int mid = left + (right - left)/2;
				if(nums[mid] > nums[mid+1]){
					right = mid;
				}else{
					left = mid ;
				}
			}
			return right;
	}
};

int main(){
	vector<int> arr;
	int a;
	for(int i = 0 ; i < 1 ; i++){
		cin >> a;
		arr.push_back(a);
	}
	Solution p;
	int b = p.findPeakElement(arr);
	cout << b;
	return 0;
}
