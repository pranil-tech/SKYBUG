#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int random(int x, int y){
    srand(static_cast<int>(time(0)));
    return rand() % (y-x+1) + x;
}

bool searchGuess(int n, int randomNumber, int& attempts){
    if(n == randomNumber){
        cout << "Congratulations ! you guessed right number in " << attempts << "attempts" << endl;
        return true;
    }
    if(n < randomNumber){
        cout << "too low try again!";
    }
    if (n > randomNumber){
        cout << "too high try again!";
    }

    attempts ++;
    return false;
}



int main() {
    cout << "Welcome! This is number guess Game ranging 0 to 500;\n";
    cout << "enter your guess until you reach to right number in less attempts!\n";

    int n;
    int attempts=1;

    //random number generation 
    int minRange=0;
    int maxRange=500;
   int randomNumber = random(minRange, maxRange);

   //function call
   do{
    cout << "Enter your guess number : ";
    cin >> n;
   }
   while( !searchGuess(n, randomNumber, attempts) );

    return 0;
}
