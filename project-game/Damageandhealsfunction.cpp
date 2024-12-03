int takedamage(int damage){
         HP-=damage;
         cout<<"You took"<<damage<<" damage. Remaining HP"<<HP<<endl;
         return HP;
         if (HP<=0){
             cout<<"Game over. You Lose!";
         }
     }
      int heal(int amount){
         HP+=amount;
         cout<<"You healed"<<amount<<" HP. Current HP="<<HP<<endl;
         return HP;
     }