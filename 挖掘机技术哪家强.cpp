#include<iostream>
using namespace std;

const int maxn = 10010;
int school[maxn] = {0};

int main (){
	int n;
	cout << "请输入参赛人数：" << endl;
	cin >> n;
	int schID = 0;
	int score = 0;
	for(int i=0 ; i<n ; i++){
		cout << "请输入第 " << i+1 << " 位参赛者的学校编号及比赛成绩" << endl;
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
	cout << "总分最高的学校编号为：" << k << endl;
	cout << "总分为：" << Max << endl; 
	return 0;
}
