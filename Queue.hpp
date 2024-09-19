// Queue.hpp
// Interface file for Queue class

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Bigram.hpp"
#include <vector>

class Queue {

public:
    // Enqueue to the tail
    int enqueue(const Bigram& bigram);

    // Dequeue from the head
    int dequeue(Bigram& bigram);

    // Shows elements of the queue
    int status();

private:
    std::vector<Bigram> queue;
};

#endif
