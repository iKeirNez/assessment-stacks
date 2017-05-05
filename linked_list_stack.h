#include "stack.h"
#include <vector>

class LinkedListStack: public StackADT {

public:
    bool isEmpty() {
        return head->next == NULL;
    }

    bool isFull() {
        try {
            new Node;
        } catch (std::bad_alloc&) {
            return true;
        }

        return false;
    }

    void push(int x) {
        Node * node = new Node;
        node->value = x;
        node->next = head;
        head = node;
    }

    int pop() {
        Node * node = head;

        int lastValue = head->value;
        head = head->next;

        return lastValue;
    }

    int size() {
        int size = 0;
        Node *node = head;

        while (node != tail) {
            size++;
            node = node->next;
        }

        return size;
    }

    std::vector<int> getContents() {
        std::vector<int> data;
        Node *node = head;

        while (node != tail) {
            data.push_back(node->value);
            node = node->next;
        }

        return data;
    }
private:
    struct Node {
        int value;
        Node *next = NULL;
    };

    Node * head = new Node;
    Node * tail = head;
};