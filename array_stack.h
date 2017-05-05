#include "stack.h"
#include <vector>

class ArrayStack: public StackADT {
public:
    ArrayStack(int size): stackSize(size), data(new int[stackSize]) {};

    bool isEmpty() {
        return top == 0;
    }

    bool isFull() {
        return top == stackSize;
    }

    void push(int x) {
        data[top++] = x;
    }

    int pop() {
        int x = data[--top];
        data[top] = 0;
        return x;
    }

    int size() {
        return top;
    }

    std::vector<int> getContents() {
        std::vector<int> contents;

        for (int i = 0; i < top; i++) {
            int value = data[i];
            contents.push_back(value);
        }

        return contents;
    }
protected:
    int stackSize;
    int top = 0;
    int* data;
};