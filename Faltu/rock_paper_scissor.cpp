#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Lets play Rock, Paper & Scissor"<<endl;
    cout<<"For Rock press 1,for Paper press 2 & for Scissor press 3."<<endl;
    int player_choice;
    cin>>player_choice;
    srand(time(0));
    int computer_choice = rand() % 3 + 1;
    cout<<"Computer Chooses :";
    switch(computer_choice){
        case 1 : 
            cout<<"Rock"<<endl;
            break;
        case 2 :
            cout<<"Paper"<<endl;
            break;
        case 3 :
            cout<<"Scissor"<<endl;
            break;
    }

    if(computer_choice==player_choice){
        cout<<"Yupp! It's a tie"<<endl;
    }else if(player_choice == 1 && computer_choice == 3|| 
            player_choice == 2 && computer_choice == 1 || 
            player_choice == 3 && computer_choice == 2){
        cout<<"Hurray ! You Win"<<endl;
    }else{
        cout<<"Oops! You Lose"<<endl;
    }
    return 0;
}