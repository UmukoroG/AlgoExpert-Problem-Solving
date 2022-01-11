using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    this->next = nullptr;
  }
};

LinkedList *reverseLinkedList(LinkedList *head) {
  // Write your code here.
	LinkedList *prev=nullptr;
	LinkedList *curr= head;
	
	while(curr != nullptr){
		LinkedList *nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
	}
  return prev;
}
