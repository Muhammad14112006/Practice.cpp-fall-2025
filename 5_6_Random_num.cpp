#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int guess, num;
    bool isGuessed;

    srand (time(0));
    num = rand() % 100;

    isGuessed = false;
    while (!isGuessed)
    {
        cout<<"Guess an integer greater than 0 and smaller than 100: ";
        cin>>guess;

        if (guess == num)
        {
            cout<<"Congratulations you have guessed the random number correctly.";
        }
        else if (guess < num)
        {
            cout<<"Your guessed number is smaller than the random number.\nGuess Again."<<endl;
        }
        else if (guess > num)
        {
            cout<<"Your Guessed number is larger than the random number.\nGuess again."<<endl;
        }
    }

    return 0;
}