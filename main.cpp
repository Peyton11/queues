// main.cpp
// Program to showcase queues

#include "Bigram.hpp"
#include "Queue.hpp"
#include <iostream>
#include <limits>

int main() {

    Queue queue;

    while (true) {

        // User selects queue operation
        int operationChoice;
        std::cout << "Enqueue[1]\nDequeue[2]\nStatus[3]\nEnd Program[4]\n";
        std::cout << "Operation choice: ";
        std::cin >> operationChoice;

        char inputBigram[3];

        // Flag used for method statuses
        int status;

        switch (operationChoice) {
            // Enqueue
            case 1: {
                std::cout << "Enter a bigram: ";
                std::cin >> inputBigram;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                Bigram bigram(inputBigram[0], inputBigram[1]);
                status = queue.enqueue(bigram);
                if (status == -1)
                    std::cout << "Overflow occured after enqueuing.\n\n";
                else
                    std::cout << "Successfully enqueued: " << bigram.characters << "\n\n";
                break;
            }

            // Dequeue
            case 2: {
                Bigram dequeued;
                status = queue.dequeue(dequeued);
                if (status == -1)
                    std::cout << "Underflow occured after dequeuing\n\n";
                else
                    std::cout << "Successfully dequeued: " << dequeued.characters << "\n\n";
                break;
            }

            // Status
            case 3: {
                status = queue.status();
                if (status == -1)
                    std::cout << "Stack is empty.\n\n";
                break;
            }

            // End Program
            default: {
                std::cout << "Program ended\n";
                return 0;
            }
        }
    }
}
