#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game{
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:

    Game(int max):maxNumber(max),playerGuess(0),randomNumber(0),numOfGuesses(0){
        srand(time(0));
        randomNumber=rand()%maxNumber+1;
    }

    ~Game(){
        cout<<"Object cleared from stack memory"<<endl;
    }

    void play(){
        do{
            cout<<"Arvaa luku valilta 1-"<<maxNumber<<": ";
            cin>>playerGuess;

            if(playerGuess==randomNumber) {
                cout<<"Onneksi olkoon! Arvasit oikein."<<endl;
            } else if(playerGuess < randomNumber){
                cout<<"Luku on suurempi."<<endl;
            } else {
                cout<<"Luku on pienempi."<<endl;
            }
            numOfGuesses++;

        } while(playerGuess!=randomNumber);
    }

    void printGameResult(){
        cout<<"Pelin tulos: Arvauksia tarvittiin "<<numOfGuesses<<" kpl. Oikea vastaus oli "<<randomNumber<<"."<<endl;
    }
};

int main(){
    Game game(40);
    game.play();
    game.printGameResult();

    return 0;
}
