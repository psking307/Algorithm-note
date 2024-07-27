#include<iostream>
#include<string>
using namespace std;

bool backspaceCompare(string s, string t){
	string S;
	string T; 
	for (int i = 0; i < s.size(); i++) {
        if (s[i] != '#') S += s[i];
        else if (!S.empty()) {
            S.pop_back();
        }
	}
    for (int i = 0; i < t.size(); i++) {
        if (t[i] != '#') T += t[i];
        else if (!T.empty()) {
            T.pop_back();
        }
    }
    cout << S << "\t" << T;
	if(S == T){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	string s,t;
	cin >> s;
	cin >> t;
	int ans = backspaceCompare(s , t);
	cout << endl << ans;
	return 0;	
}
