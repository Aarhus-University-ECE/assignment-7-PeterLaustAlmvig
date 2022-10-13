#include "stack.h"
#include <assert.h>

void initialize(stack* s){
  //implement initialize here
  s->head = NULL;

}

void push(int x, stack* s){
    //implement push here
    node *element = (node* ) malloc(sizeof(node));
    element->next = s->head;
    element->data = x;
    s->head = element;
}

int pop(stack* s){
    // implement pop here
    assert(s->head != NULL);
    int popped_element = s->head->data;
    s->head = s->head->next;
  return popped_element;
}

bool empty(stack* s)
{
  //implement empty here
  if(s->head == NULL){
    return true;
  }
  return false;
}

bool full(stack* s) {
    //implement full here
    //Doesn't make sense to check if the stack is full.
  return false;
}
