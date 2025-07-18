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
        cout<<"5. Exit"<<endl;

        cout<<"Enter the first number"<<endl;
        userInput1 = inputValidator();
        cout<<"Enter the second number"<<endl;
        userInput2 = inputValidator();

        cout<<"Choose an option"<<endl;
        userMenuOption = menuOptionValidator();

        switch (userMenuOption){
            case 1:
                cout<<"Adding numbers...."<<endl;
                cout<<userInput1<<"+"<<userInput2<<"="<<AddNum(userInput1,userInput2)<<endl;
                break;
            case 2:
                cout<<"Subtracting numbers...."<<endl;
                cout<<userInput1<<"-"<<userInput2<<"="<<SubNum(userInput1,userInput2)<<endl;
                break;

            case 3:
                cout<<"Multiplying numbers...."<<endl;
                cout<<userInput1<<"*"<<userInput2<<"="<<MulNum(userInput1,userInput2)<<endl;
                break;

            case 4:
                cout<<"Dividing numbers...."<<endl;
                cout<<userInput1<<"/"<<userInput2<<"="<<DivNum(userInput1,userInput2)<<endl;
                break;

            case 5:
            cout<<"BYE BYE!";
            running=false;


        }


               
    }while(running==true);
    return 0;
}
