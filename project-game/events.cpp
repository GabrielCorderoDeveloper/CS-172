#include<iostream>
using namespace std;

class Adventure{
    public:
    int Step3(){
        int choice;
        int steps=3;
        cout<<"You enter the forest. How do you wish to proceed?";
        cout<<"1) Move cautiously"<<endl<<"2)Rush Foward"<<endl<<"3)Climb a tree"<<endl;
    while (steps==3){
    cin>>choice;
    if (choice==1){
        steps=steps+1;
        cout<<"You move through slowly"<<endl<<"Steps="<<steps;
    }
        if (choice==2){
            steps=steps+2;
            cout<<"You run ahead"<<endl<<"Steps="<<steps;
        }
            if (choice==3) {
            cout<<"You decided to climb a tree"<<endl<<"Steps="<<steps;
            }
            else {
                cout<<"You think about it a bit longer";
            }
    }
    return steps;
 }
} ;


int main()
{
   Adventure progress;
    progress.Step3();
    
    return 0;
}
