#include <iostream>
using namespace std;

class Chef{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    string name;
};

class ItalianChef:public Chef{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();
    void makePasta();
    string getName();

private:
    int vesi;
    int jauhot;
};

Chef::Chef(string n):name(n){
    cout<<"Chef " <<name<<" konstruktori"<<endl;
}

Chef::~Chef() {
    cout<<"Chef "<< name<<" destruktori"<<endl;
}

void Chef::makeSalad(){
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup(){
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

ItalianChef::ItalianChef(string n, int vesi_, int jauhot_):Chef(n),vesi(vesi_),jauhot(jauhot_){
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef(){
    cout<<"ItalianChef "<<name<<" destruktori"<<endl;
}

void ItalianChef::makePasta(){
    cout<<"ItalianChef "<<name<<" makes pasta with "<<vesi<<" ml of water and "<<jauhot<<" g of flour"<<endl;
}

string ItalianChef::getName(){
    return name;
}

int main(){
    {
        Chef gordonRamsay("Gordon Ramsay");
        ItalianChef anthonyBourdain("Anthony Bourdain", 100, 250);

        gordonRamsay.makeSalad();
        gordonRamsay.makeSoup();

        anthonyBourdain.makeSalad();
        anthonyBourdain.makeSoup();
        anthonyBourdain.makePasta();
    }

    return 0;
}
