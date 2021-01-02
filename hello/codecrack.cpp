#include <stdio.h>
#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty){
    printf("Welcome to level %d.\n", difficulty); //recall that C functions are fully functional in C++
    const int a = 2;
    const int b = 4;
    const int c = 6;

    const int sum = a + b + c;
    const int prod = a * b * c;

    int guessA = -1;
    int guessB = -1;
    int guessC = -1;
    int gSum = -1;
    int gProd = -1;
    while(gSum != sum && gProd != prod){
        printf("Sum: %d\nProduct: %d\n", sum, prod);
        printf("Enter your guesses for the variables, separated by a space.\n");
        scanf("%d %d %d", &guessA, &guessB, &guessC);
        gSum = guessA + guessB + guessC;
        gProd = guessA * guessB * guessC;
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
