#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val){
	int slowIndex = 0;
	int rear = nums.size();
	for(int fastIndex = 0 ; fastIndex < rear ; fastIndex ++){
		if(nums[fastIndex] != val){
			nums[slowIndex++] = nums[fastIndex];
		}
	}
	return slowIndex;
}

int main(){
	vector<int> arr;
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i ++){
		int a;
		cin >> a;
		arr.push_back(a);
	}
	int val;
	cin >> val;
	int b = removeElement(arr, val);
	cout << b;
	return 0;
}
