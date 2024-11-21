 int choice,HP=100; //Place holder
        int steps=9; //Place holder
        if (steps==9){
        cout<<"You encounter a hermit deep in the forest. He offers to help you reach the temple. What will you do?"<<endl;
        cout<<"1) Listen to his advice."<<endl<<"2)Politely refuse his offer."<<endl<<"3)challenge his knowledge"<<endl;
    while (steps==9){
    cin>>choice;
    if (choice==1){
        steps=steps+2;
        cout<<"You procced easily with no problems"<<endl<<"Steps="<<steps;
    }
        if (choice==2){
            steps=steps+1;
            cout<<"You struggle to find your way"<<endl<<"Steps="<<steps;
        }
            if (choice==3) {
            cout<<"You decided to challenge the hermit's knowlege.";
            srand(time(0));
    int fiftyfifty=rand()%2;
    if (fiftyfifty==0){
        cout<<"You win against the hermit. +10HP"<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
       break; 
    } if (fiftyfifty==1){
        cout<<"You lost and the hermit sends you on you way."<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
        break;
            }
            }
            if (choice<1 || choice>3) {
                cout<<"You think about it a bit longer while you talk to the hermit.";
                
            }
        }
        }