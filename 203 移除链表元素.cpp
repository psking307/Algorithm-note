#include<iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr){}
	ListNode(int x) : val(x), next(nullptr){}
	ListNode(int x, ListNode *next) : val(x), next(next){}
};

ListNode* removeElements(ListNode* head, int val){
	ListNode* myhead = new ListNode(0);
	myhead->next = head;
	ListNode* p = myhead;
	while(p->next != NULL){
		if(p->next->val == val){
			ListNode* q = p->next ;
			p->next = q->next ;
			delete q;
		}else{
			p = p->next ;
		}
	}
	head = myhead->next ;
	delete myhead;
	return head;
}

int main(){
	ListNode *p, *pre, *head;
	head = new ListNode;
	head->next = NULL;
	pre = head;
	int size;
	cin >> size;
	for(int i = 0 ; i < size ; i++){
		p = new ListNode;
		int val;
		cin >> val;
		p->val = val;
		p->next = NULL;
		pre->next = p;
		pre = p;
	} 
	ListNode *L = head->next ;
	while(L != NULL){
		cout << L->val << " " ;
		L = L->next ;
	}
	int n;
	cin >> n;
	L = removeElements(head, n);
	L = L->next ;
	while(L != NULL){
		cout << L->val << " " ;
		L = L->next ;
	}
	return 0;
}
