#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //declaration of variables
    int sysid=123456789,syspin=1234,sys_pin;
    int id,pin,option,new_pin,new_pinn,trans_id=0,phone,trans_pin;
    float withdraw=0,balance=5000,trans_amt=0;
    char input='Y';'y';'N';'n';
    string firstname,lastname,address,acc_type;
    //time
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti=localtime(&tt);

    //Create an account
    cout<<"......................WELCOME TO CITSA BANKING SERVICES....................."<<endl;
    cout<<"To login, you first need to create an account with us"<<endl;
    cout<<"Enter your first name: ";
    cin>>firstname;
    cout<<"Enter your last name: ";
    cin>>lastname;
    cout<<"Enter your address: ";
    cin>>address;
    cout<<"Enter your phone number: ";
    cin>>phone;
    cout<<"What type of account do you intend to open?"<<endl;
    cout<<"Savings"<<endl;
    cout<<"Current"<<endl;
    cout<<"Student"<<endl;
    cin>>acc_type;
    cout<<"Thank you for creating an account with us"<<endl;
    cout<<"Your account has been created successfully"<<endl;
    cout<<"Your account ID is "<<sysid<<endl;
    do{
        cout<<"Create PIN: ";
        cin>>sys_pin;
        cout<<"Re-Enter PIN: ";
        cin>>syspin;
    }while(sys_pin!=syspin);


    cout<<"Your account has been credited with a sum of GHs"<<balance<<endl;


    //Welcome page
    cout<<"Welcome to your ATM Simulation Center"<<endl;
    cout<<"Please login to your account"<<endl;

    //Login
    start:
        cout<<"ID: ";
        cin>>id;
        cout<<"PIN: ";
        cin>>pin;
        if (id==sysid && pin==syspin){
            cout<<"Login success\n"<<endl;
            do{
            cout<<"What will you like to do"<<endl;
            cout<<"1. Withdraw Cash"<<endl;
            cout<<"2. Request Balance"<<endl;
            cout<<"3. Bank Statement"<<endl;
            cout<<"4. Reset PIN"<<endl;
            cout<<"5. Transfer Funds"<<endl;
            cout<<"Enter your option: ";
            cin>>option;
            //Cash withdrawal
            if (option==1){
                cout<<"NB: You have a daily limit of GHS1000"<<endl;
                do{
                    cout<<"Enter amount you want to withdraw: ";
                    cin>>withdraw;
                    if (withdraw<1000){
                        cout<<"You are withdrawing an amount of GHs"<<withdraw<<endl;
                        balance=balance-withdraw;
                        cout<<"Current balance: GHs"<<balance<<endl;
                    }
                    else if (withdraw==1000){
                        cout<<"You are withdrawing an amount of GHs"<<withdraw<<endl;
                        balance=balance-withdraw;
                        cout<<"Current balance: GHs"<<balance<<endl;
                    }
                    else{
                        cout<<"Amount entered exceeds daily limit"<<endl;
                        cout<<"Please try again"<<endl;
                    }
                }while(withdraw>1000);

            }
            //Balance
            else if(option==2){
                cout<<"You have an amount of GHs "<<balance<<" in your account now"<<endl;
            }
            //Bank statement
            else if(option==3){
                cout<<"                           CITSA Bank"<<endl;
                cout<<"''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"Bank Statement as at "<<asctime(ti)<<endl<<endl;
                cout<<"Account holder       :   "<<firstname<<" "<<lastname<<endl;
                cout<<"Address              :   "<<address<<endl;
                cout<<"Phone number         :   +233"<<phone<<endl;
                cout<<"Account type         :   "<<acc_type<<endl;
                cout<<"Account ID           :   "<<sysid<<endl;
                cout<<"Amount withdrawn     :   GHs"<<withdraw<<endl;
                cout<<"Amount transferred   :   GHs"<<trans_amt<<endl;
                cout<<"Transferee ID        :   "<<trans_id<<endl;
                cout<<"Date and Time of transfer: "<<asctime(ti)<<endl<<endl;
                cout<<"Account ending balance: GHs"<<balance<<endl;
                cout<<"''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;

            }
            //Reset PIN
            else if(option==4){
                reset:
                cout<<"Enter your current PIN: ";
                cin>>pin;
                if (pin!=syspin){
                        cout<<"Incorrect PIN\nTry again"<<endl;
                        goto reset;
                }
                else{

                }
                do {
                    cout<<"Enter your new PIN: ";
                    cin>>new_pin;
                    cout<<"Re-enter your new PIN: ";
                    cin>>new_pinn;
                    if(new_pin==new_pinn){
                        syspin=new_pin;
                        cout<<"Your new PIN is "<<syspin<<endl;
                    }
                    else{
                        cout<<"Your new PINs do not match\nTry again"<<endl;
                        }
                }while(new_pin!=new_pinn);



            }
            //Bank Transfer
            else if(option==5){
                cout<<"Enter the account ID of the person you want to transfer money to: ";
                cin>>trans_id;
                cout<<"Enter the amount you want to transfer: ";
                cin>>trans_amt;
                transfer:
                cout<<"Enter PIN to continue with transfer:";
                cin>>trans_pin;
                if(trans_pin==syspin){
                    cout<<"Your transfer of GHs"<<trans_amt<<" to "<<trans_id<<" was successful"<<endl;
                    cout<<"Date and Time of transfer: "<<asctime(ti)<<endl;
                    balance=balance-trans_amt;
                    cout<<"Your current balance is GHs"<<balance<<endl;
                }
                else{
                    cout<<"Incorrect PIN\nTry again"<<endl;
                    goto transfer;
                }

            }
            else{
                cout<<"Invalid input"<<endl;
            }
            cout<<"Would you like to do anything again? (Y/n)"<<endl;
            cin>>input;
            }while(input!='n' && input!='N');
        }
        else{
            cout<<"Incorrect ID and PIN"<<endl;
            goto start;
        }






    return 0;
}
