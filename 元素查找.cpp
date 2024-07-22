#include<iostream>
using namespace std;

const int maxn = 210;
int arr[maxn] ;

int main(){
	int n; 
	cout << "请输入数的个数：" << endl;
	cin >> n;
	cout << "请输入这些数:" << endl; 
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ;
	}
	cout << "请输入要查找的数：" << endl;
	int a;
	cin >> a; 
	int b = 0;
	while(a != arr[b] && b<n){
		b++;
	}
	if(b == n){
		cout << "-1" << endl;
	}else{
		cout << b << endl;
	}
}
