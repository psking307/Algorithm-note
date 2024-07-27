#include<iostream>
using namespace std;

class Solution{
	public:
		int mySqrt(unsigned int x){
			int left = 0;
			int right = x;
			if(x == 0){
				return 0;
			}
			if(x == 1){
				return 1;
			}
			while(left <= right){
				int middle = (left + right)/2;
				if(x/middle < middle ){
					right = middle - 1;
				}else if(x/middle > middle){
					left = middle + 1;
				}else{
					return middle;
				}
			}
			return right ;
		}
}; 

int main(){
	Solution p;
	int x;
	cin >> x;
	int a = p.mySqrt(x);
	cout << a << endl;
	return 0;
}
