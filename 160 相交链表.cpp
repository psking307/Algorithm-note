#include<iostream>
#include<algorithm>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr){}
	ListNode(int val) : val(val), next(nullptr){}
	ListNode(int val, ListNode* next) : val(val), next(next){}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
	int sizeA = 0;
	int sizeB = 0;
	ListNode *curA = headA, *curB = headB;
	while(curA != NULL){
		curA = curA->next; 
		sizeA ++;
	}
	while(curB != NULL){
		curB = curB->next;
		sizeB ++;
	}
	curA = headA;
	curB = headB;
	if(sizeB > sizeA){
		swap(sizeA, sizeB);
		swap(curA, curB);
	}
	int c = sizeA - sizeB;
	while(c--){
		curA = curA->next;
	}
	while(curA != curB){
		if(curA == NULL){
			return NULL;
		}
		curA = curA->next;
		curB = curB->next;
	}
	return curA;
}

void addAtHead(ListNode* &head, int val) {
		ListNode *newnode = new ListNode(val);
		newnode->next = head;
		head = newnode;
}

int main(){
	ListNode *headA = nullptr , *headB = nullptr;
	int sizeA;
	cin >> sizeA;
	int valA;
	for(int i = 0 ; i < sizeA ; i++){
		cin >> valA;
        addAtHead(headA, valA);
	}
	ListNode *curA = headA;
	while(curA != NULL){
		cout << curA->val << " ";
		curA = curA->next;
	}
	cout << endl;
	int sizeB;
	cin >> sizeB;
	int valB;
	for(int i = 0 ; i < sizeB ; i++){
		cin >> valB;
        addAtHead(headB, valB);
	}
	ListNode *curB = headB;
	while(curB != NULL){
		cout << curB->val << " ";
		curB = curB->next;
	}
	cout << endl;
	ListNode *ans = getIntersectionNode(headA, headB);
	if(ans == NULL){
		cout << "NULL" ;
	}else{
		cout << ans->val; 
	}
	return 0;
}
