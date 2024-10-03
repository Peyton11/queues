// Queue.cpp
// Implementation file for Queue class

#include "Queue.hpp"
#include <vector>
#include <iostream>

// Constructor
Queue::Queue()
    : size(0), capacity(6), front(0), rear(5) {
        queue.resize(6);
    }

// Enqueue to the tail
int Queue::enqueue(const Bigram& bigram) {
    if (isFull())
        return -1;
    else {
        rear = (rear + 1) % capacity;
        queue.at(rear) = bigram;
        ++size;
        return 0;
    }
}

// Dequeue from the head
int Queue::dequeue(Bigram& bigram) {
    if (isEmpty())
        return -1;
    else {
        Bigram temp;
        bigram = queue.at(front);
        queue.at(front) = temp;
        front = (front + 1) % capacity;
        --size;
        return 0;
    }
}

// Shows elements of the queue
int Queue::status() {
    if (isEmpty())
        return -1;

    int index = 0;
    for (auto it = queue.begin(); it != queue.end(); ++it) {
        std::cout << "Index " << index << ": " << it->characters << '\n';
        ++index;
    }
    std::cout << '\n';
    return 0;
}


// Return true if queue vector is full. Otherwise false
bool Queue::isFull() const {
    if (size == capacity)
        return true;
    else
        return false;
}

// Returns true if queue vector is empty. Otherwise, false
bool Queue::isEmpty() const {
    if (size == 0)
        return true;
    else
        return false;
}
