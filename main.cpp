#include<iostream>
#include "calculator.h"
using namespace std;

int main(){
    bool running=true;
    double userInput1,userInput2;
    int userMenuOption;
    do{
        cout<<"========MENU========"<<endl;
        cout<<"1. Add"<<endl;
        cout<<"2. Subtract"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Divide"<<endl;

        cout<<"Enter the first number"<<endl;
        userInput1 = inputValidator();
        cout<<"Enter the second number"<<endl;
        userInput2 = inputValidator();

        cout<<"Choose an option"<<endl;
        userMenuOption = menuOptionValidator();


               
    }while(running==true);
    return 0;
}
