#include <iostream>

using namespace std;

int main()
{
    string correctname = "Stargirl";
    string Username;
    string correctpin = "141204";
    string userpin;
    string block;

    double Withdraw;

    int deposit;
    int withdraw;
    int choice;

    string statement;
    string bankstatement;

    cout<< "HI! W E L C O M E TO WEIRD MONEY BANKING SYSTEM!"<<endl;

    while (true){
        cout<< "Please enter your Username";
        cin>>Username;

        if (Username == correctname){
            cout<< "Correct Username, please proceed!"<<endl;
            break;
        }
        else
            cout<< "Username invalid! TRY AGAIN!"<<endl;

    }
    while (true){
        cout<< "Please enter your pin";
        cin>>userpin;

    if (userpin == correctpin){
        cout<< "correctpin, access granted!"<<endl;
        break;
    }
    else
        cout<< "Incorectpin, please try again."<<endl;
    }

    cout<< "Enter 1 to deposit"<<endl;
    cout<< "Enter 2 to withdraw"<<endl;
    cout<< "Enter 3 to check your balance"<<endl;
    cout<< "Enter 4 to print your bank your bank statement"<<endl;
    cout<< "Enter 5 to report a stolen card"<<endl;
    cin>>choice;

    switch(choice){

   case 1:
       cout<< "How much would you like to deposit?";
       cin>>deposit;
       cout<< "You have successfully deposited R"<<deposit;
    break;

   case 2:
    cout<< "How much would you like to withdraw?";
    cin>>withdraw;

    if (Withdraw>15000)
    {
        cout<< "Insufficient funds to process withdrawal!";
    }
    else
    {
        cout<< "You have successfully withdrawn R";
    }
    break;

   case 3:
    cout<< "Existing balance R15000";
    break;

   case 4:
    cout<< "Would you like to get your statement printed? Enter 1 to get it printed";
    cin>>statement;
    cout<< "Statement successfully printed"<<statement;
    break;

   case 5:
    cout<< "Would you like to block your card?";
    cin>>block;
    if (block == "yes")
    {
        cout<< "Your card has been blocked";
    }
    else if (block == "no")
    {
        cout<< "Visit or contact nearest bank for alternative options!";
    }
    break;

   default:
    cout<< "Out of bound";

    }
    return 0;
}
