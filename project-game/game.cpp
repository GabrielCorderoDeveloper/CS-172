#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
//~ Player class
class Player
{
public:
    int HP;
    string Name;
    int steps;
};

//~Random event function
void Revent(int &chance, int &HP)
{
    int r;
    int revent = (rand() % 10 + 1);

    if (revent <= 2)
    {
        HP = HP - 10;
        cout << "You have encounter a wild animal🦁, you try to defend youself but you get hurt. -10HP" << endl;
    }
    if (revent >= 3 && revent <= 5)
    {
        HP = HP + 10;
        cout << "You find an strange plan that glows🌿. You decided to eat some of it. It heals some of you wounds. +10HP" << endl;
    }
    if (revent > 5 && revent <= 10)
    {
        (HP = HP - 5);
        cout << "You find and obstacle🪨, you are able to get trough it but you hurt yourself slightly. -5HP" << endl;
    }
    cout << "\033[31m<--------------- HP=" << HP << " --------------->\033[0m" << endl;
    cout << "(press insert 1 and ENTER to continue)" << endl;
    cin >> r;
    r = 0;
}

// 2! ALL events handler
void handleEvent(int &HP, int &steps)
{
    int chance, choice, blank;
    bool isThree = false, isSix  = false, isNine = false;
    int fiftyfifty = rand() % 2;

    if (steps % 3 != 0 && steps != 14)
    {
        if (fiftyfifty == 0)
        {
            Revent(chance, HP);
        }
        else
        {
            cout << "Nothing Happened (press insert 1 and ENTER to continue)" << endl;
            cin >> blank;
            blank = 0;
        }
    }
    else
    {
        if (steps == 3 && isThree == false)
        {

            cout << "You enter the forest. How do you wish to proceed?";
            cout << "1) Move cautiously" << endl
                 << "2)Rush Foward" << endl
                 << "3)Climb a tree" << endl;
            isThree = true;
            while (steps == 3)
            {
                cin >> choice;
                if (choice == 1)
                {
                    steps = steps + 1;
                    cout << "You move through slowly" << endl
                         << "Steps=" << steps;
                }
                if (choice == 2)
                {
                    steps = steps + 2;
                    cout << "You run ahead" << endl
                         << "Steps=" << steps;
                }
                if (choice == 3)
                {
                    cout << "You decided to climb a tree" << endl
                         << "Steps=" << steps;
                }
                else
                {
                    cout << "You think about it a bit longer";
                }
        }
        if (steps == 6 && isSix == false)
        {
            cout << "A wild boar decides to chase you. What will you do?" << endl;
            cout << "1)Try to scare it off" << endl
                 << "2)Stand your ground and fight it" << endl
                 << "3)Climb a rock to avoid it" << endl;
            isSix = true;
            while (steps == 6)
            {
                cin >> choice;
                if (choice == 1)
                {
                    cout << "You scream loudly at the boar" << endl;
                    int fiftyfifty = rand() % 2;
                    if (fiftyfifty == 0)
                    {
                        steps += +1;
                        cout << "It works and it leaves you alone. You progress by 1 step." << endl
                             << "Steps=" << steps;
                    }
                    if (fiftyfifty == 1)
                    {
                        HP -= 15;
                        cout << "It gets more aggressive. -15HP. Steps=" << steps << endl
                             << "HP=" << HP;
                        steps -= 1;
                        break;
                    }
                }
                if (choice == 2)
                {
                    HP -= 10;
                    cout << "You decided to fight. You won. -10HP." << endl
                         << "You progess by 2 steps." << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    steps += 1;
                }
                if (choice == 3)
                {
                    HP += 5;
                    cout << "You decided to climb a rock." << endl
                         << "You progess by 0 steps. +5HP" << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    steps -= 1;
                    break;
                }
                if (choice < 1 || choice > 3)
                {
                    HP -= 15;
                    cout << "You did nothing. The boar attacks you -15HP" << endl
                         << "You progess by 0 steps." << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    steps -= 1;
                    break;
                }
            }
        }
        if (steps == 9 && isNine == false)
        {
            cout << "You encounter a hermit deep in the forest. He offers to help you reach the temple. What will you do?" << endl;
            cout << "1) Listen to his advice." << endl
                 << "2)Politely refuse his offer." << endl
                 << "3)challenge his knowledge" << endl;
            isNine = true;
            while (steps == 9)
            {
                cin >> choice;
                if (choice == 1)
                {
                    steps += 1;
                    cout << "You procced easily with no problems" << endl
                         << "Steps=" << steps;
                }
                if (choice == 2)
                {
                    cout << "You struggle to find your way" << endl
                         << "Steps=" << steps;
                }
                if (choice == 3)
                {
                    cout << "You decided to challenge the hermit's knowlege.";
                    srand(time(0));
                    int fiftyfifty = rand() % 2;
                    if (fiftyfifty == 0)
                    {
                        cout << "You win against the hermit. +10HP" << endl
                             << "Steps=" << steps << endl
                             << "HP=" << HP;
                        steps -= 1;
                        break;
                    }
                    if (fiftyfifty == 1)
                    {
                        cout << "You lost and the hermit sends you on you way." << endl
                             << "Steps=" << steps << endl
                             << "HP=" << HP;
                        steps -= 1;
                        break;
                    }
                }
                if (choice < 1 || choice > 3)
                {
                    cout << "You think about it a bit longer while you talk to the hermit.";
                }
            }
        }
        if (steps == 12)
        {
            cout << "You hear water flowing in the distance. You eventually found a river. What will you do?" << endl;
            cout << "1) Build a makeshift raft." << endl
                 << "2)Wade across the river." << endl
                 << "3)Look for a detour" << endl;
        }
        while (steps == 12)
        {
            cin >> choice;
            if (choice == 1)
            {
                srand(time(0));
                int fiftyfifty = rand() % 2;
                if (fiftyfifty == 0)
                {
                    cout << "Your raft somehow held together" << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    break;
                }
                if (fiftyfifty == 1)
                {
                    HP -= 5;
                    cout << "You hurt yourself slightly when making the raft. You still make it across the river." << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    break;
                }
            }
            if (choice == 2)
            {
                steps += 1;
                cout << "You decided to walk through" << endl;
                srand(time(0));
                int fiftyfifty = rand() % 2;
                if (fiftyfifty == 0)
                {
                    cout << "You are soaked but made it across safely. " << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    break;
                }
                if (fiftyfifty == 1)
                {
                    HP -= 10;
                    cout << "You hurt yourself on a sharp rock. You still make it across the river." << endl
                         << "Steps=" << steps << endl
                         << "HP=" << HP;
                    break;
                }
            }
            else if (choice == 3)
            {
                cout << "You decided to look for a detour. ";
                int thirtyp;
                thirtyp = rand() % 10 + 1;
                if (thirtyp <= 3)
                {
                    Revent(chance, HP);
                    break;
                }
                else
                {
                    cout << "You progressed with no issues." << endl;
                }
            }
            if (choice < 1 || choice > 3)
            {
                cout << "You think about it a bit longer while you listen to your surrondings.";
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
    stats.steps = 0;
    stats.Name;

    cout << "I hear you are in search of treasure traveller. There is a tresure only if you are willing to travel along a dangerous path💀. There is a forest just ahead of here which lies an ancient temple. It is said to contain a treasure of ancient times and of great value🪙." << endl
         << endl;

    cout << "Choose a name for your character:" << endl;
    cin >> stats.Name;
    cout << "Welcome " << stats.Name << "!" << endl
         << endl;

    while (stats.steps <= 15)
    {
        handleEvent(stats.HP, stats.steps);
        cout << "steps: " << stats.steps << endl;
    }
}
