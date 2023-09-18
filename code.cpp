#include <iostream>
#include <stdlib.h> //exit

//variable
int answer; //line 14;2
char go_answer;

int main(){

    using namespace std;

    cout << "\n--------------------------------------------\n\n   Welcome to simple calculator! \n     Made by : Ayi \n\n";

    cout << "Choose : \n";
    cout << "   1. Plus\n   2. Minus\n   3. Divide\n   4. Multiplication\n      Answer? :";
    cin >> answer;

    //go
    switch (answer)
    {
    case 1:
        //_Plus();
        break;
    
    case 2:
       // _Minus();
        break;

    case 3:
        //_Divide();
        break;
    
    case 4:
        //_Multi();
        break;

    default:
        cout << "Exit? (y/n) : ";
        cin >> go_answer;

        if(go_answer == 'y'){
            cout << endl;
            cout << endl;
            exit;
        }else {

        };



    };
    

    return 0;

}


//function