#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declaring of variables
    string name;
    int ID,quantity,product, choice,profit,loss,enquiry;
    float printer=900.00;
    float phone=600.00;
    float table=100.00;
    float total,deposit,VAT;
    char input='Y';'y';'N';'n';

    cout<<"''''''''''''''''''Welcome to INF SUPERMARKET'''''''''''''''''"<<endl;

    cout<<"Please enter your name: ";
    getline(cin,name);
    cout<<"Hello "<<name<<", There are two things offered in the company. What would you like to do:"<<endl;
    cout<<"1. Purchase an item"<<endl;
    cout<<"2. Make enquires"<<endl;
    cout<<"Enter the option number: ";
    cin>>choice;

    if (choice==1) {
        //customer details
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
            else if(product==3){
                cout<<"Please enter the quantity of tables you would like to purchase: "<<endl;
                cin>>quantity;
                VAT=0.12*(table*quantity);
                total=(table*quantity+VAT);
                cout<<"Your purchase for table is going to amount to GHS "<<total<<endl;
            }
            else {
                cout<<"Invalid input"<<endl;
            }


            cout<<"Please enter your deposit amount: "<<endl;
            cin>>deposit;

            //notifying the customer
            if(deposit>total){
                profit=deposit-total;
                cout<<"You have a balance of GHS "<<profit<<endl;
            }
            else if (total>deposit){
                loss=total-deposit;
                cout<<"Your money is insufficient to purchase this item"<<endl;
                cout<<"You have a chance to purchase on credit. Hence you owe a sum of GHS "<<loss<<endl;
            }
            else {
                cout<<"You have the exact amount to pay for the item"<<endl;
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
            else if (product==3){
                cout<<"Item bought: Table"<<endl;
            }
            else {
                cout<<"Invalid input"<<endl;
            }
            cout<<"Item quantity: "<<quantity<<endl;

            cout<<"VAT amount: "<<VAT<<endl;
            if (product==1){
                cout<<"Total cost: GHS "<<(printer*quantity)<<endl;
            }
            else if (product==2){
                cout<<"Total cost: GHS "<<(phone*quantity)<<endl;
            }
            else if (product==3) {
                cout<<"Total cost: GHS "<<(table*quantity)<<endl;
            }
            else {
                cout<<"Invalid input"<<endl;
            }

            if (deposit>total){
                cout<<"Total amount paid: GHS "<<total<<endl;
                cout<<"Balance: GHS "<<profit<<endl;
            }
            else if (total>deposit){
                cout<<"Total amount paid: GHS "<<total<<endl;
                cout<<"Owing: GHS "<<loss<<endl;
            }
            else{
                cout<<"Total amount paid: GHS "<<total<<endl;
                cout<<"You have no outstanding payments"<<endl;
            }
            cout<<"Amount deposited: GHS "<<deposit<<endl<<endl;

            cout<<"..............................................................."<<endl;
            cout<<"_______________________________________________________________"<<endl;

                cout<<"Would you like to purchase anything else? (Y/n)"<<endl;
                cin>>input;

        }while(input!='n');

        cout<<".............Thank you for transacting with us................."<<endl;

        }

        //enquiring on the company
    else if (choice==2){
        do {
            cout<<"What will you like to enquire on"<<endl;
            cout<<"1. The CEO of the company"<<endl;
            cout<<"2. The executive board of the company"<<endl;
            cout<<"3. History of the company"<<endl;
            cout<<"4. The product sold in the company"<<endl;
            cout<<"5. The product pricing system"<<endl;
            cout<<"6. The payment strategy of the employees"<<endl;
            cout<<"Enter the option number: ";
            cin>>enquiry;
            if (enquiry==1){
                cout<<"This company is headed by Mr. Paul Arhin"<<endl;
            }
            else if (enquiry==2){
                cout<<"CEO                      :   Mr. Paul Arhin"<<endl;
                cout<<"Managing Director        :   Mr. Clement Argon"<<endl;
                cout<<"Marketing Director       :   Mr. Michael Effum"<<endl;
                cout<<"Human Resource Personnel :   Mrs. Osman Muneera"<<endl;
            }
            else if (enquiry==3){
                cout<<"The company was founded by Mr. Benjamin Poku. It was established in the year 1987 leaded by the then CEO(Mr. Kweku Debrah)."<<endl;
                cout<<"The INF Supermarket currently has 12 shareholders of whom are listed below:"<<endl;
                cout<<">>> Mr. Daniel Gbogbo"<<endl;
                cout<<">>> Mrs. Sandra Poku"<<endl;
                cout<<">>> Mrs Sarah Attipoe"<<endl;
                cout<<">>> Mr. Elliot Attipoe"<<endl;
                cout<<">>> Da Breeze Resort"<<endl;
                cout<<">>> Sugartone General"<<endl;
                cout<<">>> Airteltigo"<<endl;
                cout<<">>> MTN Ghana"<<endl;
                cout<<">>> Foods and Drugs Authority"<<endl;
                cout<<">>> Ghana Revenue Authority"<<endl;
                cout<<">>> Vodafone Ghana"<<endl;
                cout<<">>> Sam Jonah"<<endl;
                cout<<"All these shareholders contribute to the running of the company."<<endl;
                cout<<"INF supermarket Engages in social responsibilities like visiting of neighbouring schools and supplying them with the necessary items to stay safe in this COVID era."<<endl;
            }
            else if (enquiry==4){
                cout<<"The products been sold in the company are three for now"<<endl;
                cout<<"Printers"<<endl;
                cout<<"Phones"<<endl;
                cout<<"Tables"<<endl;
            }
            else if (enquiry==5){
                cout<<"The products are priced using the wholesale pricing system"<<endl;
                cout<<"1) Printer    =   GHS "<<printer<<".00"<<endl;
                cout<<"2) Phone      =   GHS "<<phone<<".00"<<endl;
                cout<<"3) Table      =   GHS "<<table<<".00"<<endl;
            }
            else if (enquiry==6){
                cout<<"The employees of the company are paid according to the number of sale they make. The number of sale made multiplied by the price of the products sold all divided by ten ie. (sales*price)/10"<<endl;
            }
            else {
                cout<<"Invalid input"<<endl;
            }

            //option to enquire again
            cout<<"Would you like to know anything else? (Y/n)"<<endl;
            cin>>input;

        }while(input!='n');
        cout<<".............Thank you for enquiring on with us................."<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }


    return 0;
}
