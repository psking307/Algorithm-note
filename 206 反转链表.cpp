#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void addAtHead(ListNode* &head, int val) {
		ListNode *newnode = new ListNode(val);
		newnode->next = head;
		head = newnode;
}

ListNode* reverseList(ListNode* head){
	ListNode* temp;
	ListNode* cur = head;
	ListNode* pre = NULL;
	while(cur != NULL){
		temp = cur->next ;
		cur->next = pre ;
		pre = cur;
		cur = temp;
	}
	return pre;
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
	ListNode *cur2 = reverseList(head);
	while(cur2 != NULL){
		cout << cur2->val << " ";
		cur2 = cur2->next;
	}
	cout << endl;
	return 0;
}
