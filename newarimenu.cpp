                //Code (1)
#include <iostream>
using namespace std;

int main(){
    int order, no_deals;
    cout << "|*--------------------MENU--------------------*|" << endl;
    cout << endl;
    
    cout << "(1) Newari Khana       Rs.250 only. "<<endl;
    cout << "(2) Newari Khaja       Rs.100 only."<<endl;
    cout << "(3) Yomari             Rs.150 only."<<endl;
    cout << "(4) Choila Buff        Rs.300 only."<<endl;
    cout << "(5) Chatamari          Rs.100 only."<<endl;
    
    cout << "~-------------Drinks-------------~"<<endl;

    cout << "(6) Chhang             Rs.50 only."<<endl;
    cout << "(7) Aila               Rs.100 only."<<endl;

    cout <<endl;

    cout << "Please select the order number: ";
    cin >> order;
    cout << "Please enter the number of deals: ";
    cin >> no_deals;
    cout << endl;

                //Code (2)
    switch(order) {
        case 1:
    cout << "Order : Newari Khana. "<< endl;
    cout << "Number of plates : "<< no_deals << endl;
    cout << "Price of each plate: Rs.250 only." << endl;
    cout << "Total price : "<<"Rs."<<250*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;

    case 2:
    cout << "Order : Newari Khaja. "<< endl;
    cout << "Number of plates : "<< no_deals << endl;
    cout << "Price of each plate: Rs.100 only." << endl;
    cout << "Total price : "<<"Rs."<<100*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;

    case 3:
    cout << "Order : Yomari. "<< endl;
    cout << "Number of plates : "<< no_deals << endl;
    cout << "Price of each plate: Rs.150 only." << endl;
    cout << "Total price : "<<"Rs."<<150*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;
                // Code (3)
    case 4:
    cout << "Order : Choila Buff. "<< endl;
    cout << "Number of plates : "<< no_deals << endl;
    cout << "Price of each plate: Rs.300 only." << endl;
    cout << "Total price : "<<"Rs."<<300*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;

    case 5:
    cout << "Order : Chatamari. "<< endl;
    cout << "Number of plates : "<< no_deals << endl;
    cout << "Price of each plate: Rs.100 only." << endl;
    cout << "Total price : "<<"Rs."<<100*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;

    case 6:
    cout << "Order : Chhang "<< endl;
    cout << "Number of bottles : "<< no_deals << endl;
    cout << "Price of each bottle: Rs.50 only." << endl;
    cout << "Total price : "<<"Rs."<<50*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;

    case 7:
    cout << "Order : Aila "<< endl;
    cout << "Number of bottles : "<< no_deals << endl;
    cout << "Price of each bottle: Rs.100 only." << endl;
    cout << "Total price : "<<"Rs."<<100*no_deals << " " << "only." <<endl;
    cout << endl;
    cout << "~----------Thank You For Coming------------~" << endl;
    break;

    }
    return 0;
}