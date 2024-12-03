int steps=12;
        if (steps==12){
        cout<<"You hear water flowing in the distance. You eventually found a river. What will you do?"<<endl;
        cout<<"1) Build a makeshift raft."<<endl<<"2)Wade across the river."<<endl<<"3)Look for a detour"<<endl;
        }
    while (steps==12){
    cin>>choice;
    if (choice==1){
        steps=steps+1;
        srand(time(0));
    int fiftyfifty=rand()%2;
    if (fiftyfifty==0){
        cout<<"Your raft somehow held together"<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
       break; 
    } if (fiftyfifty==1){
        HP-=5;
        cout<<"You hurt yourself slightly when making the raft. You still make it across the river."<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
        break;
    
    }
    }
        if (choice==2){
            steps=steps+2;
            cout<<"You decided to walk through"<<endl;
            srand(time(0));
    int fiftyfifty=rand()%2;
    if (fiftyfifty==0){
        cout<<"You are soaked but made it across safely. "<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
       break; 
    } if (fiftyfifty==1){
        HP-=10;
        cout<<"You hurt yourself on a sharp rock. You still make it across the river."<<endl<<"Steps="<<steps<<endl<<"HP="<<HP;
        break;
        }
        }
            else if (choice==3) {
            steps=+1;
            cout<<"You decided to look for a detour. ";
            int thirtyp;
   thirtyp =rand()%10+1;
    if (thirtyp<=3){
        cout<< Revent();
   break; } else{
        cout<<"You progressed with no issues."<<endl;
            }
            }
              if (choice<1 || choice>3) {
                cout<<"You think about it a bit longer while you listen to your surrondings.";
            }
        }