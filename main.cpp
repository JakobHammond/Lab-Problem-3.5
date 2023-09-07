//
//  main.cpp
//  p3.5
//
//  Created by Jakob Hammond on 9/7/23.
//

#include <iostream>
using namespace std;

int main(void){
    double totalBookPrice;
    int totalBooks;
    double orderPrice;
    
    cout << "Enter total book cost of all books: ";
    cin >> totalBookPrice;
    cout << "Enter total number of books purchased: ";
    cin >> totalBooks;
    
    orderPrice = (totalBookPrice * 1.075) + (totalBooks * 2.50);
    cout << "Price of order is $" << orderPrice << endl;
}
