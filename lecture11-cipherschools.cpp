#include<iostream>
using namespace std;
int main(){
    int i=0;
    //while loop 
    /*while(condition){

    }*/
    while(i<101)//condition
    {
        cout<<i<<" "; //loop
        i++; //updation
    }

    int d;
    int input;
    //guess the number 65 the user has 100 chances
    d=100;
    for(d=1;d<100;d++){
        cin>>input; //'=' assignment operator '==' equivalent operator 
        if(input==65){
            cout<<"Congrats you have guessed correct";
            break;
        }
    }
}
