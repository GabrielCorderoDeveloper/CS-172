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

//~Random event function
void Revent(int &chance, int &HP){
    srand(time(0));
    int revent=(rand()%10+1);

    if (revent<=2){
        HP=HP-10;
        cout<<"You have encounter a wild animal🦁, you try to defend youself but you get hurt. -10HP"<<endl;
    } if (revent>=3 && revent<=5){
        HP=HP+10;
        cout<<"You find an strange plan that glows🌿. You decided to eat some of it. It heals some of you wounds. +10HP"<<endl;
    } if (revent>5 && revent<=10){
        (HP=HP-5);
        cout<<"You find and obstacle🪨, you are able to get trough it but you hurt yourself slightly. -5HP" << endl;
    } 
    cout <<"\033[31m<--------------- HP=" << HP << " --------------->\033[0m" << endl;
    cout<<"(press ENTER to continue)"<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

//2! ALL events handler
void handleEvent(int &HP, int &steps){
    int chance, choice, blank;
    srand(time(0));
    int fiftyfifty=rand()%2;

    if (steps % 3 != 0){
        if (fiftyfifty==0){
            Revent(chance, HP);
        } else{
            cout<<"Nothing Happened (press ENTER to continue)"<<endl;
            cin >> blank;
        } 
    } else {
        if (steps==6){
        cout<<"A wild boar decides to chase you. What will you do?"<<endl;
        cout<<"1)Try to scare it off"<<endl<<"2)Stand your ground and fight it"<<endl<<"3)Climb a rock to avoid it"<<endl;

        while (steps==6){
        cin>>choice;
        if (choice==1){
            cout<<"You scream loudly at the boar"<<endl;
            srand(time(0));
        int fiftyfifty=rand()%2;
        if (fiftyfifty==0){
            steps+=+1;
            cout<<"It works and it leaves you alone. You progress by 1 step."<<endl<<"Steps="<<steps;
        } if (fiftyfifty==1){
            HP-=15;
            cout<<"It gets more aggressive. -15HP. Steps="<<steps<<endl<<"HP="<<HP;
            break;
        }
        }
            if (choice==2){
                steps+=2;
                HP-=10;
                cout<<"You decided to fight. You won. -10HP."<<endl<<"You progess by 2 steps."<<endl<<"Steps="<<steps<<endl<<
                "HP="<<HP;
            }
                if (choice==3) {
                HP+=5;
                cout<<"You decided to climb a rock."<<endl<<"You progess by 0 steps. +5HP"<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
                break;
                }
                if (choice<1 || choice>3) {
                    HP-=15;
                    cout<<"You did nothing. The boar attacks you -15HP"<<endl<<"You progess by 0 steps."<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
                    break;
                }
        } 
        }
    }
    
    steps++;
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

    while (stats.steps <= 15)
    {
        handleEvent(stats.HP, stats.steps);
        cout << "steps: " << stats.steps << endl;
    }
    
}
