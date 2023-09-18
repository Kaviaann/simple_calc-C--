#include <iostream>
#include <cstdlib> // For the system function
#include <thread>  // For the sleep_for function
using namespace std;

// Function prototypes
void calculate(char operation);
void clearScreen();

int main() {
    cout << "\n--------------------------------------------\n\n   Welcome to simple calculator! \n     Made by : Ayi \n\n";

    int answer;

    cout << "Choose : \n";
    cout << "   1. Plus\n   2. Minus\n   3. Divide\n   4. Multiplication\n      Answer? : ";
    cin >> answer;

    switch (answer) {
        case 1:
            calculate('+');
            break;

        case 2:
            calculate('-');
            break;

        case 3:
            calculate('/');
            break;

        case 4:
            calculate('*');
            break;

        default:
            cout << "Invalid choice. Exiting.\n";
            break;
    }

    return 0;
}

// Function to perform calculation and display result
void calculate(char operation) {
    int x, y;
    cout << "\n\nPlease Enter 2 Values (Must Be Full Integers) : " << endl;
    
    cout << "Value 1 : ";
    cin >> x;
    cout << endl;

    cout << "Value 2 : ";
    cin >> y;
    cout << endl;

    int result;
    switch (operation) {
        case '+':
            result = x + y;
            break;

        case '-':
            result = x - y;
            break;

        case '/':
            if (y != 0) {
                result = x / y;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return;
            }
            break;

        case '*':
            result = x * y;
            break;

        default:
            cout << "Invalid operation.\n";
            return;
    }

    cout << "Answer: " << result << "\n";

    cout << "\n\t* Exitting In 2.5s... *";
    // Menjalankan program selama 2,5 detik (2500 milidetik)
    this_thread::sleep_for(chrono::milliseconds(2500));

    clearScreen();


}

// Function to clear the screen
void clearScreen() {
    int clearStatus = system("clear");

    if (clearStatus != 0) {
        clearStatus = system("cls");
    }
}
