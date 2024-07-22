#include<iostream>
using namespace std;

// PAT B1001  (3n+1)猜想
int main(){
	cout << "请输入一个不超过1000的正整数：" << endl;
	int n;
	int step = 0;
	cin >> n ;
	while(n != 1){
		if(n % 2 == 0){
			n = n / 2;
			step ++;
		}else{
			n = (3 * n + 1)/2;
			step ++;
		}
	}
	cout << "从n计算到1需要 " << step << " 步" << endl;
	return 0; 
} 
