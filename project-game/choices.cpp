#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
 class Player {
    public:
    int HP;
    string Name;
    int steps;
} ;
 int Revent(int chance){
     int HP=100;
     srand(time(0));
     int revent=(rand()%10+1);
     if (revent<=2){
         HP=HP-10;
         cout<<"Wild animal attacks. -10HP"<<endl<<"HP=";
     } if (revent>=3 && revent<=5){
         HP=HP+10;
         cout<<"Found a healing herb. +10HP"<<endl<<"HP=";
     } if (revent>5 && revent<=10){
         (HP=HP-5);
         cout<<"Ran into an obstacle. -5HP"<<endl<<"HP=";
     } 
     return HP;
 }
int main()
{ Player stats;
  stats.HP = 100;
  stats.steps= 0;
  stats.Name = "Chris";
  
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