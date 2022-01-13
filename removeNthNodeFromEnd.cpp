#include <vector>
using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value);
  void addMany(vector<int> values);
  vector<int> getNodesInArray();
};

void removeKthNodeFromEnd(LinkedList *head, int k) {
  // Write your code here.
	LinkedList *f=head;
	LinkedList *s=head;
	int len=1;
	while(len <= k){
		s=s->next;
		len++;
	}
	//when the second pointer ends in null
	//F           S
	//0->1->2->3->null
	if(s==nullptr){
		head->value=head->next->value;
		head->next = head->next->next;
		return;
	}
	
	while(s->next != nullptr){
		f=f->next;
		s=s->next;
	}
	// 1->2->3 gives 1->3
	f->next = f->next->next;
	
}
