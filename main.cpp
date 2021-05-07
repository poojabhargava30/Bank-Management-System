#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
class Bank
{
    char name[100],add[100],y;
    float balance;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};
void Bank :: open_account() {
  cout<<"Enter your full name :: ";
    cin.ignore();
    cin.getline(name,100);
  cout<<"Enter your address ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"Type of account saving (s) or current (c)";
    cin>>y;
    cout<<"Enter amount of deposit: ";
    cin>>balance;
    cout<<"Your account has been created";
}
void Bank :: deposit_money()
{
    int a;
    cout<<"Enter your deposit ::";
    cin>>a;
    balance+=a;
    cout<<"\n your total amount is: "<<balance;
}
void Bank :: display_account() {

   cout<<"Your full name: "<<name;
   cout<<"\nYour address is: "<<add;
   cout<<"\nYour Type of account: "<<y;
   cout<<"\nYour deposit amount: "<<balance;

}
void Bank :: withdraw_money() {

    float amount;
   cout<<"\n Withdraw: ";
   cout<<"\nEnter amount to withdraw: ";
   cin>>amount;
   balance-=amount;
   cout<<"\nYour new balance is: "<<balance;

}
int main()
{
    int option,x;
    Bank obj;
    do{
    cout << "1) Open Account\n";
    cout << "2) Deposit Money\n";
    cout << "3) Withdraw Money\n";
    cout << "4) Display Account\n";
    cout << "5) Exit \n";
    cout<<"Select the Option: \n";
    cin>>option;

    switch(option) {

         case 1:"1) Open Account \n";
         obj.open_account();
         break;

         case 2:"2) Deposit Money \n";
         obj.deposit_money();
         break;

         case 3:"3)Withdraw Money \n";
         obj.withdraw_money();
         break;

         case 4:"4) Display Account \n";
         obj.display_account();
         break;

         case 5:
            if(option==5){
                exit(1);
            }
         default:
            cout<<"Invalid option! Choose again \n";
    }
    cout<<"\n want to press next option then press :: y \n";
    cout<<"\n If you want to exit then press :: N";
    x=getch();
    if(x=='n'|| x=='N')
        exit(0);
    }while(x=='y'||x=='Y');


    getch();
    return 0;
}
