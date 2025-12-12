//ENC222-0137/2024
#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <vector>    

int main() {
    std::srand(std::time(0)); 

    const int SIZE = 20;
    const int MIN_VAL = 1;
    const int MAX_VAL = 100;
    
    int originalArray[SIZE];
    std::vector<int> oddValues;
    std::vector<int> evenValues;
    std::cout << "--- Original Array of 20 Random Integers (1-100) ---\n";
    for (int i = 0; i < SIZE; i++) {
        int randomNumber = (std::rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
        originalArray[i] = randomNumber;
        if (randomNumber % 2 == 0) {
            evenValues.push_back(randomNumber);
        } else {
            oddValues.push_back(randomNumber);
        }
        std::cout << randomNumber << " ";
    }
    std::cout << std::endl << std::endl;
    std::cout << "--- Odd Values Array (" << oddValues.size() << " elements) ---\n";
    for (int value : oddValues) {
        std::cout << value << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "--- Even Values Array (" << evenValues.size() << " elements) ---\n";
    for (int value : evenValues) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
