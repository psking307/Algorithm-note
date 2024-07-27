#include<iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode() : val(0) , next(nullptr){}
	ListNode(int val) : val(val) , next(nullptr){}
	ListNode(int val, ListNode* next) : val(val) , next(next){}
};

int kthToLast(ListNode* head, int k) {
	ListNode *myhead = new ListNode();
	myhead->next = head;
	ListNode *pre = myhead, *cur = myhead;
	while(k--){
		cur = cur->next;
	}
	while(cur != NULL){
		pre = pre->next;
		cur = cur->next;
	}
	return pre->val;
}

void addAtHead(ListNode* &head, int val) {
		ListNode *newnode = new ListNode(val);
		newnode->next = head;
		head = newnode;
}

int main(){
	ListNode *head = nullptr;
	int size;
	cin >> size;
	int val;
	for(int i = 0 ; i < size ; i++){
		cin >> val;
        addAtHead(head, val);
	}
	ListNode *cur1 = head;
	while(cur1 != NULL){
		cout << cur1->val << " ";
		cur1 = cur1->next;
	}
	cout << endl;
	int k;
	cin >> k;
	int ans = kthToLast(head, k);
	cout << ans << endl;
	return 0;
}
