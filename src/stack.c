#include "stack.h"
#include <assert.h>

void initialize(stack* s){
  //implement initialize here
  //Once the stack is initialised the head must point to NULL since there's no elements.
  s->head = NULL;

}

void push(int x, stack* s){
    //implement push here
    /*Create a new element then make that element point to the previous top of the stack (s.head)
    * Update s.head to point to the newest top element and add the number to elements datafield.
    */
    node *element = (node* ) malloc(sizeof(node));
    element->next = s->head;
    element->data = x;
    s->head = element;
}

int pop(stack* s){
    // implement pop here
    /*Only pop an element if the stack is not empty.
    * make the head point to the second element from the top and return the old s.head data value.
    */
    assert(s->head != NULL);
    int popped_element = s->head->data;
    s->head = s->head->next;
  return popped_element;
}

bool empty(stack* s)
{
  //implement empty here
  //The stack is only empty if s.head points to NULL.
  if(s->head == NULL){
    return true;
  }
  return false;
}

bool full(stack* s) {
    //implement full here
    /*Doesn't make sense to check if the stack is full since we haven't declared a stack size
    * The stack will be full once we run out of memeory.
    */
  return false;
}
