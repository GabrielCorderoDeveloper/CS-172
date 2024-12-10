#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//*Player class
class Player
{
public:
    int HP;
    string Name;
    int steps;
};

void Revent(int &chance, int &HP)
{
    int r;
    int revent = (rand() % 10 + 1);

    if (revent <= 2)
    {
        HP = HP - 10;
        cout << "You have encountered a wild animal🦁. You try to defend yourself but get hurt. -10HP" << endl;
    }
    else if (revent >= 3 && revent <= 5)
    {
        HP = HP + 10;
        cout << "You find a strange plant that glows🌿. You decide to eat some of it. It heals some of your wounds. +10HP" << endl;
    }
    else
    {
        HP = HP - 5;
        cout << "You find an obstacle🪨. You manage to get through it but hurt yourself slightly. -5HP" << endl;
    }
    cout << "\033[31m<--------------- HP=" << HP << " --------------->\033[0m" << endl;
    cout << "(Press 1 and ENTER to continue)" << endl;
    cin >> r;
}

//~Handle events function
void handleEvent(int &HP, int &steps, bool eventCompleted[])
{
    int choice;

    if (eventCompleted[steps])
    {
        cout << "Nothing happened. (Press 1 and ENTER to continue.)" << endl;
        int blank;
        cin >> blank;
        steps++;
        return;
    }

    if (steps == 3)
    {
        cout << "You enter the forest. How do you wish to proceed?\n";
        cout << "1) Move cautiously\n2) Rush Forward\n3) Climb a tree\n";
        cin >> choice;

        if (choice == 1)
        {
            steps += 1;
            cout << "You move through slowly.\n";
        }
        else if (choice == 2)
        {
            steps += 2;
            cout << "You run ahead.\n";
        }
        else if (choice == 3)
        {
            cout << "You decide to climb a tree and observe your surroundings.\n";
        }
        else
        {
            cout << "You think about it a bit longer.\n";
        }
        eventCompleted[steps] = true; //Marking the events as completed
        return;
    }

    if (steps == 6)
    {
        cout << "A wild boar decides to chase you. What will you do?\n";
        cout << "1) Try to scare it off\n2) Stand your ground and fight it\n3) Climb a rock to avoid it\n";
        cin >> choice;

        if (choice == 1)
        {
            if (rand() % 2 == 0)
            {
                steps += 1;
                cout << "It works and it leaves you alone. You progress by 1 step.\n";
            }
            else
            {
                HP -= 15;
                cout << "It gets more aggressive. You lose 15 HP.\n";
            }
        }
        else if (choice == 2)
        {
            HP -= 10;
            steps += 2;
            cout << "You decide to fight. You win but lose 10 HP.\n";
        }
        else if (choice == 3)
        {
            HP += 5;
            cout << "You climb a rock and gain 5 HP but make no progress.\n";
        }
        else
        {
            HP -= 15;
            cout << "You hesitate and the boar attacks you. You lose 15 HP.\n";
        }
        eventCompleted[steps] = true; 
        return;
    }

    //~Random events for other steps
    if (rand() % 2 == 0)
    {
        Revent(steps, HP);
    }
    else
    {
        cout << "Nothing happened. (Press 1 and ENTER to continue.)\n";
        int blank;
        cin >> blank;
    }
    steps++;
}

//~Main function
int main()
{
    Player stats;
    stats.HP = 100;
    stats.steps = 0;

    cout << "I hear you are in search of treasure, traveller. There is a treasure only if you are willing to travel along a dangerous path💀. There is a forest just ahead of here which lies an ancient temple. It is said to contain a treasure of ancient times and of great value🪙.\n\n";

    cout << "Choose a name for your character:\n";
    cin >> stats.Name;
    cout << "Welcome " << stats.Name << "!\n\n";

    bool eventCompleted[16] = {false}; //Tracks if the event is completed for every single step

    while (stats.steps <= 15)
    {
        handleEvent(stats.HP, stats.steps, eventCompleted);
        cout << "steps: " << stats.steps << endl;
    }
    return 0;
}
