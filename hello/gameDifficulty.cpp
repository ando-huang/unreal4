#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty){

}

int main(){
    int difficulty;
    int MAXdifficulty;
    while(difficulty < MAXdifficulty){
        PlayGameAtDifficulty(difficulty);
        std::cin.clear();
        std::cin.ignore();
        ++difficulty;
    }
    return 0;
}