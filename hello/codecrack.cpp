#include <stdio.h>
#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty){
    printf("Welcome to level %d.\n", difficulty); //recall that C functions are fully functional in C++
    const int A = 1 + rand() % (difficulty + 1);
    const int B = 1 + rand() % (difficulty + 1);
    const int C = 1 + rand() % (difficulty + 1);

    const int Sum = A + B + C;
    const int Prod = A * B * C;

    int GuessA = -1;
    int GuessB = -1;
    int GuessC = -1;
    int GSum = -1;
    int GProd = -1;
    int correct = -1;
    while(correct == -1){
        printf("Sum: %d\nProduct: %d\n", Sum, Prod);
        printf("Enter your guesses for the variables, separated by a space.\n");
        scanf("%d %d %d", &GuessA, &GuessB, &GuessC);
        GSum = GuessA + GuessB + GuessC;
        GProd = GuessA * GuessB * GuessC;
        if(GSum == Sum && GProd == Prod){
            correct = 1;
        }
    }
    printf("--- Code cracked ---\n");
    return;
}

int main(){
    int difficulty = 2;
    const int maxDifficulty = 10;

    while(difficulty <= maxDifficulty){
        PlayGameAtDifficulty(difficulty);
        //clears input for new line, extra space
        std::cin.clear();
        std::cin.ignore();
        difficulty++;
    }
    std::cout << "Good job!\n";
    return 0;
}
