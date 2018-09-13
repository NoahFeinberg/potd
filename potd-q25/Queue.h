#ifndef _QUEUE_H
#define _QUEUE_H

#include <cstddef>
#include <stack>

using namespace std;
class Queue {
    private:
        stack<int> st;
        int s;
    public:
        int size() const;
        bool isEmpty() const;
        void enqueue(int value);
        int dequeue();
        Queue();
};

#endif
