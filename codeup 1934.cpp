#include<iostream>
using namespace std;

const int maxn = 210;
int arr[maxn] ;

int main(){
	int n; 
	cout << "���������ĸ�����" << endl;
	cin >> n;
	cout << "��������Щ��:" << endl; 
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ;
	}
	cout << "������Ҫ���ҵ�����" << endl;
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
