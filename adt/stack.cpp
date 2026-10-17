#include "stack.hpp"

bool Stack::is_empty() {
    return this->length == 0;
}

Stack::Node* Stack::get_top() {
    return this->top;
}

void Stack::push(const int value) {
    bool is_empty = this->is_empty();
        Stack::Node top = Stack::Node();
        top.value = value;
        top.previous = nullptr;

    if (is_empty) {
        this->top = &top;
        this->length++;
    }

    top.previous = this->top;    
    this->top = &top;    
    this->length++;
}


int Stack::pop() {
  if (Stack::length == 0) {
    return -1;
  }

  Stack::Node top = Stack::Node();
  int value = top.value;
  this->top = top.previous;
  this->length--;

  return value;
}

int Stack::size() {
 return this->length;
}

void Stack::clear() {
  bool is_empty = this->is_empty();
    if (!is_empty) {
        int i = this->length;
        while ( i != 0 ) {
            Stack::Node* removed = this->top;
            this->top = removed->previous;
            i--;
           this->length--;
           delete removed;
        }
    }
}


