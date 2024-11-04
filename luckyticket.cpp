#include <iostream>
using namespace std;

int a; // First part of the ticket number (first three digits)
int b; // Second part of the ticket number (last three digits)
int res1; // Sum of digits of the first part
int res2; // Sum of digits of the second part

int main()
{
    setlocale(LC_ALL, "RU");

    int x = 1; // Variable to store the ticket number, start from 1 to enter the loop

    // We start a loop that will run until the user enters 0
    while (x != 0)
    {
        // We ask the user to enter the ticket number
        cout << "Введите номер билета (или 0 для выхода): " << endl;
        cin >> x;

        if (x == 0) 
        {
            break; 
        }

        // Input validity check: number must consist of 6 digits
        if (x < 100000 || x > 999999) 
        {
            cout << "Пожалуйста, введите корректный номер билета (6 цифр)." << endl;
            continue; // If the input is incorrect, skip the iteration
        }

        a = x / 1000; // We get the first three digits
        b = x % 1000; // We get the last three digits

        // Calculate the sum of the digits of the first part
        res1 = (a / 100) + (a / 10 % 10) + (a % 10);
        // Calculate the sum of the digits of the second part
        res2 = (b / 100) + (b / 10 % 10) + (b % 10);

        if (res1 == res2)
        {
            cout << "Счастливый билет!" << endl; 
        }
        else
        {
            cout << "Не счастливый билет!" << endl; 
        }
    }

    cout << "Спасибо за использование программы!" << endl; // Message upon exit
    return 0; 
}