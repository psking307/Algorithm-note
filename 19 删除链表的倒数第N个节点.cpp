#include<iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode() : val(0) , next(nullptr){}
	ListNode(int val) : val(val) , next(nullptr){}
	ListNode(int val, ListNode* next) : val(val) , next(next){}
};

ListNode* removeNthFromEnd(ListNode *head, int n){
	ListNode *myhead = new ListNode();
	myhead->next = head;
	ListNode *pre = myhead, *cur = myhead;
	while(n--){
		cur = cur->next;
	}
	while(cur->next != NULL){
		pre = pre->next;
		cur = cur->next;
	}
	ListNode* tmp = pre->next;
	pre->next = tmp->next;
	delete tmp;
	head = myhead->next;
	delete myhead;
	return head;
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
	int n;
	cin >> n;
	ListNode *cur2 = removeNthFromEnd(head, n);
	while(cur2 != NULL){
		cout << cur2->val << " ";
		cur2 = cur2->next;
	}
	cout << endl;
	return 0;
}
