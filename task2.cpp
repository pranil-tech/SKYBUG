#include <iostream>
#include <limits>

using namespace std;

bool checkValidInput(double& input, const string& str) {
    cout << str;
    if (cin >> input) {
        return true;
    } else {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please enter a valid number: " << endl;
        return false;
    }
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double a, b, result;
    char operation;

    while (true) {
        if (!checkValidInput(a, "Enter the first Number: ")) {
            break;
        }
    }
    while (true)
    {
        if(!checkValidInput(b, "Enter the second number: ")){
            break;
        }
    }
    

    cout << "Select operation: +, -, *, or / : ";
    cin >> operation;

    switch (operation) {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = subtract(a, b);
        break;
    case '*':
        result = multiply(a, b);
        break;
    case '/':
        if (b != 0) {
            result = divide(a, b);
        } else {
            cout << "Alert! Dividing by 0 is not defined" << endl;
            return 1;
        }
        break;
    default:
        cout << "Invalid operation input! Enter the correct operation among +, -, *, or / " << endl;
        return 1;
    }

    cout << "The answer is: " << result << endl;

    return 0;
}
