#include <iostream>
#include <random>

using namespace std;

int main(){
    int number = rand()%100+1;

    int guess,Chance=0;
    do{
        cout<<"Guess the Number : ";
        cin>>guess;
        if(guess>number){
            cout<<"Number is Low"<<endl;
            Chance++;
        }else{
        cout<<"Number is High"<<endl;
        Chance++;
        }
    }while (guess!=number);
    Chance++;
    cout<<"Guessed The Answer in "<<Chance<<" Times"<<endl;
    return 0;
}