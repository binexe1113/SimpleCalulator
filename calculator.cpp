#include<iostream>
#include "calculator.h"
#include<string>
#include<cctype>
using namespace std;

double inputValidator(){
    string line;
    bool isValid = false;

    do{ 
    bool isAllDigits = true;
    getline(cin,line);
    if (line.size()==0){
        cout<<"Please enter a number"<<endl;
        continue; 
    }
        int startIndex = 0;
        if (line[0] == '-' || line[0] == '+') {
            if (line.length() == 1) { // String is just '-' or '+'
                isAllDigits = false;
            }
            startIndex = 1;
        }

    for (int i =startIndex;i<line.size();i++){
        if (isdigit(line[i]) == false){
            cout<< "Please enter only numbers"<<endl;
            isAllDigits=false;
            break;
        }
    }
        if(isAllDigits==true){
            if(stoi(line)>99999999999999){
                cout<<"Please enter a smaller number"<<endl;
                continue;
            }
        }else{
            continue;
        }

        isValid=true;
    
    }while(isValid == false);
    return stod(line);
    
}


int menuOptionValidator(){
    string line;
    bool isValid = false;

    do{ 
    bool isAllDigits = true;
    getline(cin,line);
    if (line.size()==0){
        cout<<"Please enter a number";
        continue; 
    }
    for (int i =0;i<line.size();i++){
        if (isdigit(line[i]) == false){
            cout<< "Please enter only numbers between 1 and 5"<<endl;
            isAllDigits=false;
            break;
        }
    }
        if(isAllDigits==true){
            if(stoi(line)>5){
                cout<<"Please enter a number between 1 and 5"<<endl;
                continue;
            }
        }else{
            continue;
        }

        isValid=true;
    
    }while(isValid == false);
    return stoi(line);
    
}

double AddNum(double n1, double n2){
    return(n1+n2);
}

double SubNum(double n1, double n2){
    return(n1-n2);
}

double MulNum(double n1, double n2){
    return(n1*n2);
}

double DivNum(double n1, double n2){
    if (n2==0){
        cout<<"Division by 0 FATAL ERROR"<<endl;
        return 0;
    }
    return(n1/n2);
}
