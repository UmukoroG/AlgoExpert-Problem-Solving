#include <vector>

using namespace std;

// This is an input class. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};

LinkedList *mergeLinkedLists(LinkedList *headOne, LinkedList *headTwo) {
  // Write your code here.
	LinkedList *p1=headOne;
	LinkedList *p2=headTwo;
	LinkedList *p1prev=nullptr;
	while(p1!=nullptr && p2!=nullptr){
		if(p1->value < p2->value){
			p1prev=p1;
			p1=p1->next;
		}
		else{
			if(p1prev!=nullptr){
				// p1prev=p2;
				// p2=p2->next;
				// p1prev->next=p1;
				p1prev->next=p2;
			}
			p1prev=p2;
			p2=p2->next;
			p1prev->next=p1;
		}
	}	
	if(p1==nullptr){
		p1prev->next=p2;
	}
		
  if(headOne->value < headTwo->value) return headOne;
	return headTwo;
}
