#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4){
	unordered_map<int, int> umap;
	for(int a : nums1){
		for(int b : nums2){
			umap[a+b] ++;
		}
	}
	int count = 0;
	for(int c : nums3){
		for(int d : nums4){
			if(umap.find( 0-(c+d) ) != umap.end()){
				count += umap[0-(c+d)];
			} 
		}
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	vector<int> nums1, nums2, nums3, nums4;
	for(int i = 0 ; i < n ; i++){
		int element1;
		cin >> element1;
		nums1.push_back(element1);
	}
		for(int i = 0 ; i < n ; i++){
		int element2;
		cin >> element2;
		nums2.push_back(element2);
	}
		for(int i = 0 ; i < n ; i++){
		int element3;
		cin >> element3;
		nums3.push_back(element3);
	}
		for(int i = 0 ; i < n ;i++){
		int element4;
		cin >> element4;
		nums4.push_back(element4);
	}
	int ans = fourSumCount(nums1, nums2, nums3, nums4);
	cout << ans;
	return 0;
}
