#include <iostream>

using namespace std;

int main() {

    int smRoomCost = 25;
    int lrgRoomCost = 35;
    double salesTax = 0.06;
    int validFor = 30;

    string smRoom = "Small";
    string lrgRoom = "Large";
    
    int noSmRoom = 0;
    int noLrgRoom = 0;

    cout << "Franks Carpet Cleaning Service\nCharges\n$" <<smRoomCost <<"\n$" <<lrgRoomCost 
    <<"\nSales tax rate is " <<salesTax*100 << "%\nEstimates are valid for" << validFor <<" days."<<endl;

    cout << "How many" << smRoom << "rooms would you like cleaned?"<<endl;
    cin >> noSmRoom;
    cout << "How many" << lrgRoom << "rooms would you like cleaned?" <<endl;
    cin >> noLrgRoom;

    int salesTotal = (smRoomCost * noSmRoom) + (lrgRoomCost * noLrgRoom);

    cout << "Estimate for carpet cleaning service\nNumber of " <<smRoom << " rooms: " <<noSmRoom 
    <<"\nNumber of " <<lrgRoom <<" rooms: " <<noLrgRoom <<"\nPrice per " <<smRoom <<" room: $" <<smRoomCost
    <<"\nPrice per " <<lrgRoom <<" room: $" << lrgRoomCost <<"\nCost: $" << salesTotal
    <<"\nTax: $" << (salesTax * salesTotal) <<"\n===========================\nTotal estimate: $" 
    << (salesTotal) + (salesTotal * salesTax) <<"\nThis estimate is valid for " <<validFor <<" days";



    return 0;
     
}