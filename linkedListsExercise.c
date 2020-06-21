#include <stdio.h>

typedef struct list_template{
  int val;
  struct list_template * next;
}list; 


void listPrint (list * head){
  while (head){
    printf("%d-->",head->val);
    head = head->next;
  }
  printf("NULL\n");
}

list * reverseList(list * head){
  list * newHead = NULL;

  if (head->next->next){
    newHead = reverseList(head->next);
  }
  else{
    newHead = head->next;
    head->next->next=head;
    head->next = NULL;
    return newHead;
  }

  head->next->next=head;
  head->next = NULL;

  return newHead;
  
} 

list * reverseList2 (list * head){
  list * first = head; 
  list * second= head->next;
  list * temp = NULL;

  while(second){
    if(first==head){
      first->next = NULL;

    }
    temp = second -> next;
    second -> next =  first;
    first = second;
    second = temp;

  }
  return first;

}
