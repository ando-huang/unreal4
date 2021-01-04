#include <stdio.h>
#include <iostream>
#include <ctime>

int PlayGameAtDifficulty(int difficulty){
    printf("Welcome to level %d.\n", difficulty-1); //recall that C functions are fully functional in C++
    int tries = 0;

    srand(time(0)); //use this to reinitialize rand so each run is different
    const int A = 1 + rand() % difficulty; //generates int between 1 and difficulty+1
    const int B = 1 + rand() % difficulty; 
    const int C = 1 + rand() % difficulty;

    const int Sum = A + B + C;
    const int Prod = A * B * C;

    int GuessA = -1;
    int GuessB = -1;
    int GuessC = -1;
    int GSum = -1;
    int GProd = -1;

    while(GSum != Sum || GProd != Prod){
        printf("Sum: %d\nProduct: %d\n", Sum, Prod);
        printf("Enter your guesses for the variables, separated by a space.\n");
        scanf("%d %d %d", &GuessA, &GuessB, &GuessC);
        GSum = GuessA + GuessB + GuessC;
        GProd = GuessA * GuessB * GuessC;
        tries++;
    }
    
    printf("--- Code cracked ---\n");
    return tries;
}

int main(){
    int difficulty = 2;
    const int maxDifficulty = 10;

    int tries = 0;
    
    while(difficulty <= maxDifficulty){
        tries += PlayGameAtDifficulty(difficulty);
        //clears input for new line, extra space
        std::cin.clear();
        std::cin.ignore();
        difficulty++;
    }
    std::cout << "Good job! You beat all the codes!\n";
    printf("Your score was %0.2f.\n", float(maxDifficulty/tries));
    return 0;
}
