#include <iostream>
#include "stack.h"
#include "array_stack.h"
#include "linked_list_stack.h"

#define STACK_SIZE 20

using namespace std;

void test_stack(StackADT* stack);
void show_stack(StackADT* stack);
void push_stack(StackADT *stack);
void pop_stack(StackADT *stack);

int main() {
    cout << "Testing array based stack." << endl;
    ArrayStack arrayStack = ArrayStack(STACK_SIZE);
    test_stack(&arrayStack);

    cout << "Testing linked list based stack." << endl;
    LinkedListStack linkedListStack;
    test_stack(&linkedListStack);
}

void test_stack(StackADT* stack) {
    show_stack(stack);

    push_stack(stack);
    cout << "Pushed testing numbers to stack." << endl;
    show_stack(stack);

    cout << "Start stack popping." << endl;
    pop_stack(stack);
    cout << "Popped all values." << endl;
    show_stack(stack);
}

void show_stack(StackADT* stack) {
    cout << "Showing stack contents" << endl;
    vector<int> contents = stack->getContents();
    bool empty = contents.size() == 0;

    if (!empty) {
        for_each(contents.begin(), contents.end(), [] (int value) {
            cout << value << endl;
        });
    } else {
        cout << "<empty>" << endl;
    }
}

void push_stack(StackADT *stack) {
    for (int i = 0; i < STACK_SIZE; i++) {
        stack->push(i);
    }
}

void pop_stack(StackADT *stack) {
    while (!stack->isEmpty()) {
        int poppedValue = stack->pop();
        cout << poppedValue << endl;
    }
}
