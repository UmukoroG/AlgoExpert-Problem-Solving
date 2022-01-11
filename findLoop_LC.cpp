#include <iostream>
using namespace std;

bool hasCycle(ListNode *head) {     
    ListNode *q, *p;
    p=q=head;
    while(q && q->next){
        q=q->next->next;
        p=p->next;
        if(p==q){
            return 1;
        }
    }
    return 0;        
}