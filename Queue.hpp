// Queue.hpp
// Interface file for Queue class

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Bigram.hpp"
#include <vector>

class Queue {

public:

    // Constructor
    Queue();

    // Enqueue to the tail
    int enqueue(const Bigram& bigram);

    // Dequeue from the head
    int dequeue(Bigram& bigram);

    // Shows elements of the queue
    int status();

private:

    // Return true if queue vector is full. Otherwise false
    bool isFull() const;

    // Returns true if queue vector is empty. Otherwise, false
    bool isEmpty() const;

    // Queue vector and its attributes
    std::vector<Bigram> queue;
    int size;
    int capacity;
    int front;
    int rear;
};

#endif
