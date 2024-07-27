#include<iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode() : val(0) , next(nullptr){}
	ListNode(int val) : val(val) , next(nullptr){}
	ListNode(int val, ListNode* next) : val(val), next(next){}
};

ListNode* swapPairs(ListNode* head){
	ListNode* myhead = new ListNode();
	myhead->next = head;
	ListNode* cur = myhead;
	while(cur->next != NULL && cur->next->next != NULL){
		ListNode* tmp = cur->next;
		ListNode* tmp1 = cur->next->next->next;
		cur->next = cur->next->next;
		cur->next->next = tmp;
		tmp->next = tmp1;
		cur = cur->next->next;
	}
	ListNode* ans = myhead->next;
	delete myhead;
	return ans;
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
	ListNode *cur2 = swapPairs(head);
	while(cur2 != NULL){
		cout << cur2->val << " ";
		cur2 = cur2->next;
	}
	cout << endl;
	return 0;
}
