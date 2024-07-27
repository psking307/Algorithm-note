#include<iostream>
using namespace std;

class MyLinkedList{
public:
	struct LinkedNode{
		int val;
		LinkedNode* next;
		LinkedNode(int val) : val(val), next(nullptr){}
	};
	
	MyLinkedList() {
		myhead = new LinkedNode(0);
		size = 0;
	}
	    
	int get(int index) {
		if(index > (size - 1) || index < 0) return -1;
		LinkedNode *cur = myhead->next;
		while(index --){
			cur = cur->next;
		}
		return cur->val;
	}
	    
	void addAtHead(int val) {
		LinkedNode *newhead = new LinkedNode(val);
		newhead->next = myhead->next;
		myhead->next = newhead;
		size ++;
	}
	    
	void addAtTail(int val) {
		LinkedNode *newtail = new LinkedNode(val);
		LinkedNode *cur = myhead;
		while(cur->next != nullptr){
			cur = cur->next;
		}
		cur->next = newtail;
		size ++;
	}
	    
	void addAtIndex(int index, int val) {
		if(index > size || index < 0) return;
		LinkedNode *newnode = new LinkedNode(val);
		LinkedNode *cur = myhead;
		while(index --){
			cur = cur->next;
		}
		newnode->next = cur->next;
		cur->next = newnode;
		size ++;
	}
	    
	void deleteAtIndex(int index) {
		if(index >= size || index < 0) return;
		LinkedNode *cur = myhead;
		while(index --){
			cur = cur->next;
		}
		LinkedNode *tmp = cur->next;
		cur->next = cur->next->next;
		delete tmp;
		tmp = nullptr;
		size --; 
	}
	
	void printLinkedList() {
        LinkedNode* cur = myhead;
        while (cur->next != nullptr) {
            cout << cur->next->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
private:
	int size;
	LinkedNode* myhead;    	
};

int main(){
	MyLinkedList List;
	List.addAtHead(1);
	List.printLinkedList();
	List.addAtTail(3);
	List.printLinkedList();
	List.addAtIndex(1, 2);  
	List.printLinkedList(); 
	cout << List.get(1) << endl;        
	List.deleteAtIndex(1);
	List.printLinkedList();  
	List.get(1);
	cout << List.get(1) << endl;
	return 0;
}
