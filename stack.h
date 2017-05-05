#pragma once

#include <vector>

// Defines the methods required for an integer based stack
class StackADT {

public:
    // <summary>
    // Adds an integer value to the stack
    // </summary>
    // value - the value to add to the stack
    virtual void push ( int value ) = 0;

    // <summary>
    // Removes and returns the last value from the stack
    // </summary>
    // return - the last value from the stack
    virtual int pop ( ) = 0;

    // <summary>
    // Checks if the stack is full
    // </summary>
    // return - true if the stack is full, false otherwise
    virtual bool isFull() = 0;

    // <summary>
    // Checks if the stack is empty
    // </summary>
    // return - true if the stack is empty, false otherwise
    virtual bool isEmpty() = 0;

    // <summary>
    // Gets the size of the stack
    // </summary>
    // return - the number of items in the stack
    virtual int size() = 0;

    // <summary>
    // Gets the contents of the stack
    // </summary>
    // return - the contents in vector form
    virtual std::vector<int> getContents() = 0;
};