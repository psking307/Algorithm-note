#include<iostream>
using namespace std;

bool isPerfectSquare(int num){
	int left = 0;
	int right = num;
	if(num == 1){
		return 1;
	}
	while(left <= right){
		int middle = (left + right)/2;
		if(num/middle < middle ){
			right = middle - 1;
		}else if(num/middle > middle){
			left = middle + 1;
		}else{
			if(num % middle == 0){
				return true;
			}
			return false;
		}
	}
	return false ;
}


int main(){
	int num;
	cin >> num;
	cout << isPerfectSquare(num) << endl;
	return 0;
}
