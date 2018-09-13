#include "Queue.h"
using namespace std;
Queue::Queue() {
    s =0;
}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Queue::size() const {
  return s;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Queue::isEmpty() const {
  return st.empty();
}

// `void enqueue(int val)` - enqueue an item to the queue in O(1) time
void Queue::enqueue(int value) {
   st.push(value);
   s++;
}

// `int dequeue()` - removes an item off the queue and returns the value in O(1) time
int Queue::dequeue() {
  if(!st.empty()){
      s--;
      stack<int> temp;
      while(!st.empty()){
        temp.push(st.top());
        st.pop();
      }
      int val = temp.top();
      temp.pop();
      while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
      }
      return val;
  }
  return -1;
}

