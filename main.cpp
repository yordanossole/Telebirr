#include <iostream>
#include <fstream>

using namespace std;

//Declaration of input output file object
fstream file;

//I prefer to use different files for different functions like for PIN and account info
//and using the same file object for all input and output

//Function prototype
void checkPIN(short);
void menu();
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

    return 0;
}
void menu(){
    cout << "\tWelcome to XYZ mobile banking.\n"
         << "Enter 4-digit PIN: ";
    cin >> *PIN;


}
void checkPIN(short PIN){
    if(true){

    }
}
void balance();
void buyAirTime();
void merchantPay();
void moneyTransfer();
void withdraw();
void changePIN();
void exchangeRate();
void deposit();

