#include <iostream>
#include <fstream>
#include <windows.h> //for sleep()
#include <conio.h> //for getch()

using namespace std;

//Declaration of input output file object
fstream file;

//I prefer to use different files for different functions like for PIN and account info
//and using the same file object for all input and output

//Function prototype
void getAccess();
void checkPIN();
void mainMenu();
void balance();
void buyAirTime();
void merchantPay();
void moneyTransfer();
void withdraw();
void changePIN();
void exchangeRate();
void deposit();

//Variable declaration
short *PIN = new short;

int main()
{
    mainMenu();
    return 0;
}
void mainMenu(){
    getAccess();
    checkPIN();

}
void getAccess(){
//This function gives access to the mobile banking based on the input
// and uses recursion if the dialed number is not correct.
    string accessCode = "*111#";
    string call;
    cout << "Call *111# to get access to the mobile banking of XYZ\n";
    cin >> call;
    if(call == accessCode){
        Sleep(2000);//Indrodusing a delay of 2 second defined in windows.h header file
        system("cls");
        return;
    }
    else{
        cout << "Invalid USSD code!!!\n";
        Sleep(2000);
        system("cls");
        getAccess();
    }
    return;
}
void checkPIN(){
//This function checks whether the PIN entered by the user correct or not.
    short inputPIN;
    short PIN;
    short counter = 0;
    cout << "\tWelcome to XYZ mobile banking.\n"
         << "Enter 4-digit PIN: ";
    cin >> inputPIN;
    file.open("PIN", ios::binary | ios::in);
    file >> PIN;
    file.close();
    if(counter <= 5){
        if(PIN == inputPIN){
            Sleep(2000);
            system("cls");
            return;
        }
        else{
            cout << "Incorrect PIN!!!\n";
            Sleep(2000);
            system("cls");
            checkPIN();
        }
    }
    else{
        cout << "Access denied due to repeated wrong input!!!";
        getch();
        exit(1);
    }
    return;
}
void balance();
void buyAirTime();
void merchantPay();
void moneyTransfer();
void withdraw();
void changePIN();
void exchangeRate();
void deposit();

