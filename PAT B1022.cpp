#include<iostream>
using namespace std;

int main(){
	cout << "������������A��B��D��" << endl;
	int A, B, D;
	cin >> A >> B >> D;
	int C = A + B;
	int z[40], num = 0;
	
	// ����ȡ��
	do{
		z[num++] = C % D;
		C /= D;
	}while(C != 0);
	
	for(int i = num-1 ; i >= 0 ; i--){
		cout << z[i];
	} 
}
