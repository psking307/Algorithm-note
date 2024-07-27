#include<iostream>
#include<vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int record[1010] = {0};
    vector<int> ans;
    for(int i = 0 ; i < nums1.size() ; i++){
        record[nums1[i]] ++;
    }
    for(int i = 0 ; i < nums2.size() ; i++){
        if(record[nums2[i]] > 0){
            ans.push_back(nums2[i]);
            record[nums2[i]] --;
        }
    }
    return ans;
}

int main(){
	return 0;
} 
