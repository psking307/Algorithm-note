#include<iostream>
using namespace std;

const int maxn = 10010;
int school[maxn] = {0};

int main (){
	int n;
	cout << "���������������" << endl;
	cin >> n;
	int schID = 0;
	int score = 0;
	for(int i=0 ; i<n ; i++){
		cout << "������� " << i+1 << " λ�����ߵ�ѧУ��ż������ɼ�" << endl;
		cin >> schID >> score;
		school[schID] += score;
	}
	int Max = -1;
	int k = 0;
	for(int i=0 ; i<n ; i++){
		if(school[i] > Max){
			Max = school[i];
			k = i ;
			}
	}
	cout << "�ܷ���ߵ�ѧУ���Ϊ��" << k << endl;
	cout << "�ܷ�Ϊ��" << Max << endl; 
	return 0;
}
