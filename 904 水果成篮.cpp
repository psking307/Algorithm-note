#include<iostream>
#include<vector>
using namespace std;

int totalFruit(vector<int>& fruits){
	int ans = 2;
	int i = 0;
	int sublength = 0;
	int basket[2] = {fruits[0]};
	if(fruits.size() == 1) return 1;
	for(int j = 0 ; j < fruits.size() ; j ++){
		if(fruits[j] != basket[0] && fruits[j] != basket[1]){
			i = j - 1;
			basket[0] = fruits[i];
			while(i >= 1 && fruits[i-1] == basket[0]) i --;
			basket[1] = fruits[j];
			sublength = j - i + 1;
			ans = ans < sublength ? sublength : ans;
		}else{
			ans = ans < j - i + 1  ? j - i + 1 : ans;
		}
	}
	return ans;
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
	int ans = totalFruit(nums);
	cout << ans;
	return 0;
}
