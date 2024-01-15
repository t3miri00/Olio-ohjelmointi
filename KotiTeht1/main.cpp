#include <iostream>
#include <cstdlib>
#include <ctime>


int game(int maxnum);

int main(){

    int arvaustenMaara=game(40);

    std::cout<<"Onneksi olkoon! Arvasit oikein. Arvausten maara: "<<arvaustenMaara<<std::endl;

        return 0;
}


int game(int maxnum){

    std::srand(std::time(0));

    int etsittavaLuku=std::rand()%maxnum+1;

    int pelaajanArvaus;

    int arvaustenMaara=0;

    do {
        std::cout<<"Arvaa luku valilta 1-"<<maxnum<<":";
        std::cin>>pelaajanArvaus;

        if(pelaajanArvaus==etsittavaLuku){
            std::cout<<"Oikein!"<<std::endl;
        }else if(pelaajanArvaus < etsittavaLuku){
            std::cout<<"Luku on suurempi."<<std::endl;
        }else{
            std::cout<<"Luku on pienempi."<<std::endl;
        }

        arvaustenMaara++;

    } while(pelaajanArvaus!=etsittavaLuku);

    return arvaustenMaara;
}
