#include<iostream>
using namespace std;

// PAT B1001  (3n+1)����
int main(){
	cout << "������һ��������1000����������" << endl;
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
	cout << "��n���㵽1��Ҫ " << step << " ��" << endl;
	return 0; 
} 
