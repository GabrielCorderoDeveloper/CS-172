#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
//~ Player class
class Player {
    public:
    int HP;
    string Name;
    int steps;
};
//~Random event handler
int Revent(int chance){
    int HP=100;
    srand(time(0));
    int revent=(rand()%10+1);
    if (revent<=2){
        HP=HP-10;
        cout<<"You have encounter a wild animal🦁, you try to defend youself but you get hurt. -10HP"<<endl<<"HP=";
    } if (revent>=3 && revent<=5){
        HP=HP+10;
        cout<<"You find an strange plan that glows🌿. You decided to eat some of it. It heals some of you wounds. +10HP"<<endl<<"HP=";
    } if (revent>5 && revent<=10){
        (HP=HP-5);
        cout<<"You find and obstacle🪨, you are able to get trough it but you hurt yourself slightly. -5HP"<<endl<<"HP=";
    } 
    return HP;
}

int main() 
{ 
    Player stats;
    stats.HP = 100;
    stats.steps= 0;
    stats.Name;

    cout << "I hear you are in search of treasure traveller. There is a tresure only if you are willing to travel along a dangerous path💀. There is a forest just ahead of here which lies an ancient temple. It is said to contain a treasure of ancient times and of great value🪙." << endl << endl;

    cout << "Choose a name for your character:" << endl;
    cin >> stats.Name;
    cout << "Welcome " << stats.Name << "!" << endl << endl;

    int chance;
    srand(time(0));
    int fiftyfifty=rand()%2;
    if (fiftyfifty==0){
        cout<< Revent(chance);
    } else{
        cout<<"Nothing Happened"<<endl;
    } cout<< stats.HP;
    return 0;

}
