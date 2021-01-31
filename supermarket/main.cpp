#include <iostream>

using namespace std;

int main()
{
    //declaring of variables
    string name;
    int ID,quantity,product;
    float printer=900.00;
    float phone=600.00;
    float table=100.00;
    float total,deposit,VAT;
    char input='Y';'y';'N';'n';

    cout<<"''''''''''''''''''Welcome to INF SUPERMARKET'''''''''''''''''"<<endl;

    //customer details
    cout<<"Please enter your name: ";
    getline(cin,name);
    cout<<"Please enter your ID: ";
    cin>>ID;
    cout<<""<<endl;

    do {
    //listing of items in stock
    cout<<"Items in stock:"<<endl;
    cout<<"1) Printer    =   GHS "<<printer<<endl;
    cout<<"2) Phone      =   GHS "<<phone<<endl;
    cout<<"3) Table      =   GHS "<<table<<endl;

    //taking order from the customer
    cout<<"NB: You can only purchase one item at a time"<<endl;
    cout<<"Please enter the option number of the product you would like to purchase"<<endl;
    cout<<"What would you like to purchase?"<<endl;
    cin>>product;



    //calculating the vat and providing the total amount
    if(product==1){
        cout<<"Please enter the quantity of printers you would like to purchase: "<<endl;
        cin>>quantity;
        VAT=0.12*(printer*quantity);
        total=(printer*quantity+VAT);
        cout<<"Your purchase for printer is going to amount to GHS "<<total<<endl;
    }
    else if(product==2){
        cout<<"Please enter the quantity of phones you would like to purchase: "<<endl;
        cin>>quantity;
        VAT=0.12*(phone*quantity);
        total=(phone*quantity+VAT);
        cout<<"Your purchase for phone is going to amount to GHS "<<total<<endl;
    }
    else{
        cout<<"Please enter the quantity of tables you would like to purchase: "<<endl;
        cin>>quantity;
        VAT=0.12*(table*quantity);
        total=(table*quantity+VAT);
        cout<<"Your purchase for table is going to amount to GHS "<<total<<endl;
    }


    cout<<"Please enter your deposit amount: "<<endl;
    cin>>deposit;

    //notifying the customer
    int profit,loss;
    if(deposit>total){
        profit=deposit-total;
        cout<<"You have a balance of GHS "<<profit<<endl;
    }
    else{
        loss=total-deposit;
        cout<<"Your money is insufficient to purchase this item"<<endl;
        cout<<"You have a chance to purchase on credit. Hence you owe a sum of GHS "<<loss<<endl;
    }

    cout<<"Your receipt is printed below..."<<endl;

    //receipt
    cout<<"________________________________________________________________"<<endl;
    cout<<".........................INF SUPERMARKET........................"<<endl;
    cout<<""<<endl;
    cout<<"                        Purchase Receipt"<<endl;
    cout<<""<<endl;
    cout<<"Customer name: "<<name<<endl;
    cout<<"Customer ID number: "<<ID<<endl;
    if (product==1){
        cout<<"Item bought: Printer"<<endl;
    }
    else if (product==2){
        cout<<"Item bought: Phone"<<endl;
    }
    else{
        cout<<"Item bought: Table"<<endl;
    }
    cout<<"Item quantity: "<<quantity<<endl;

    cout<<"VAT amount: "<<VAT<<endl;
    if (product==1){
        cout<<"Total cost: GHS "<<(printer*quantity)<<endl;
    }
    else if (product==2){
        cout<<"Total cost: GHS "<<(phone*quantity)<<endl;
    }
    else {
        cout<<"Total cost: GHS "<<(table*quantity)<<endl;
    }

    if (deposit>total){
        cout<<"Total amount paid: GHS "<<total<<endl;
        cout<<"Balance: GHS "<<profit<<endl;
    }
    else{
        cout<<"Total amount paid: GHS "<<total<<endl;
        cout<<"Owing: GHS "<<loss<<endl;
    }
    cout<<"Amount deposited: GHS "<<deposit<<endl<<endl;

    cout<<"..............................................................."<<endl;
    cout<<"_______________________________________________________________"<<endl;

        cout<<"Would you like to purchase anything else? (Y/n)"<<endl;
        cin>>input;

    }while(input!='n');

    cout<<".............Thank you for transacting with us................."<<endl;

    return 0;
}
