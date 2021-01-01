#include <stdio.h>
#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty){
    return;
}

int main(){
    int difficulty = 2;
    int maxDifficulty = 10;

    while(difficulty <= maxDifficulty){
        PlayGameAtDifficulty(difficulty);
        std::cin.clear();
        std::cin.ignore();
        difficulty++;
    }
    std::cout << "Good job!\n";
    return 0;
}
