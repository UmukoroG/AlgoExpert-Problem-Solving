using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *head) {
  // Write your code here.
	LinkedList *curr=head;
	LinkedList *nextVal=curr->next;
	while(curr!=nullptr){
		while(nextVal!=nullptr && nextVal->value == curr->value){
			nextVal=nextVal->next;
		}
		curr->next=nextVal;
		curr=nextVal;
	}
	
  return head;
}
