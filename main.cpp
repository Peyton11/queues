// main.cpp
// Program to showcase queues

#include <iostream>
#include "Bigram.hpp"
#include "Queue.hpp"

int main() {

    Queue queue;

    int operationChoice;
    std::cout << "Enqueue[1]\nDequeue[2]\nStatus[3]\nEnd Program[4]\n";
    std::cout << "Operation choice: ";
    std::cin >> operationChoice;

    char inputBigram[3];
    switch (operationChoice) {
        // Enqueue
        case 1:
            std::cout << "Enter a bigram: ";
            std::cin >> inputBigram;
            Bigram bigram(inputBigram[0], inputBigram[1]);
            queue.enqueue(bigram);

        // Dequeue
        case 2:

        // Status
        case 3:

        // End Program
        case 4:
            return 0;
    }

    return 0;
}