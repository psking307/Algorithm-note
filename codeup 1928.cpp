#include<iostream>
using namespace std;

// 平年和闰年每个月的天数 
int month[13][2] = {{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}};

// 判断是否为闰年
bool isLeapYear(int year){
	if( (year%4 == 0 && year%100 != 0) || year%400 == 0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	cout << "请输入两个日期：" << endl;
	int day1, day2;
	cin >> day1 >> day2 ;
	if(day1 > day2){
		int temp = day1;
		day1 = day2;
		day2 = temp;
	}
	int y1, y2, m1, m2, d1, d2;
	y1 = day1 / 10000; m1 = day1 % 10000 / 100; d1 = day1 % 100;
	y2 = day2 / 10000; m2 = day2 % 10000 / 100; d2 = day2 % 100;
	int ans = 1;
	while ( y1 < y2 || m1 < m2 || d1 < d2){
		d1 ++;
		if(d1 == month[m1][ isLeapYear(y1) ] + 1){
			m1 ++;
			d1 = 1;
		}
		if(m1 == 13){
			y1 ++;
			m1 = 1;
		}
		ans ++;
	}
	cout << ans << endl;
	return 0;
} 
