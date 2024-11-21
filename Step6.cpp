int steps=6,choice,HP=100; //Placeholder until we get class to work
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