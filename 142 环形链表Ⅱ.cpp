#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode() : val(0) , next(nullptr){}
	ListNode(int val) : val(val) , next(nullptr){}
	ListNode(int val , ListNode *next) : val(val) , next(next){}
}; 

ListNode *detectCycle(ListNode *head){
	ListNode *fast = head, *slow = head;
	while(fast != NULL && fast->next !=NULL){
		slow = slow ->next;
		fast = fast->next->next;
		if(slow == fast){
			ListNode* index1 = fast;
			ListNode* index2 = head;
			while(index1 != index2){
				index1 = index1->next;
				index2 = index2->next;
			}
			return index2;
		} 
	}
	return NULL;
}
