#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int HexToDec(string n) { return stoi(n, 0, 16); }
void decimalToBinary(int n);
void decimaltoHex(int n);
void binaryToDecimal(char binaryNum[64]);
int main()
{
    int userInput;
    int numberInput = 0;
    char userChar[64];
    string hexNumber;
    cout << "1. Decimal to Binary: " << endl;
    cout << "2. Decimal to Hex: " << endl;
    cout << "3. Binary to Decimal: " << endl;
    cout << "4. Hex to Decimal: " << endl;
    cout << "Choose an option: ";
    cin >> userInput;
    switch(userInput)
    {
        case 1:
            cout << "Input an integer: ";
            cin >> numberInput;
            decimalToBinary(numberInput);
            break;
        case 2:
            cout << "Input an integer: ";
            cin >> numberInput;
            decimaltoHex(numberInput);
            break;
        case 3:
            cout << "Input a binary number: ";
            cin >> userChar;
            binaryToDecimal(userChar);
            break;
        case 4:
            //Cheating a little and using a predefined function
            cout << "Input a Hex Number: ";
            cin >> hexNumber;
            cout << HexToDec(hexNumber);
            break;
        default:
        cout << "Invalid user input";
    }
}

void decimalToBinary(int n)
{
    cout << "Converting decimal number " << n << " to binary " << endl;
    //Assumption that the integer is 32 bits
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
        
    }
    cout << " " << endl;
    cout << "Time complexity is: O(1)";
}
void decimaltoHex(int n)
{
    //Cheating again and using a predefined function
    cout << hex << n << endl;
}
void binaryToDecimal(char binaryNum[])
{
    cout << stoi(binaryNum, 0, 2);
    cout << " " << endl;
    cout << "Time complexity is: O(n) where n is the length of the given string";
}
