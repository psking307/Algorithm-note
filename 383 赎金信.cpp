#include<iostream>
#include<string>
using namespace std;

bool canConstruct(string ransomNote, string magazine){
	int alphabet[26] = {0};
	if (ransomNote.size() > magazine.size()) {
        return false;
    }
	for(int i = 0 ; i < magazine.size() ; i++){
		alphabet[magazine[i]-'a'] ++;
	}
	for(int i = 0 ; i < ransomNote.size() ; i++){
		alphabet[ransomNote[i]-'a'] --;
	}
	for(int i = 0 ; i < 26 ; i++){
		if(alphabet[i] < 0){
			return false;
		}
	}
	return true;
}
