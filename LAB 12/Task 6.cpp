#include <iostream>
using namespace std;

void showMenu() {
	cout << "**********************" <<endl;
    cout << "\tMENU"<<endl;
    cout << "**********************" <<endl;
    cout << "1. Burger - $5\n";
    cout << "2. Pizza - $8\n";
    cout << "3. Fries - $3\n";
    cout << "4. Soda - $2\n";
    cout << "5. Ice Cream - $4\n";
    cout << "6. Exit\n";
}

float calculateItemCost(float price, int quantity) {return price * quantity;}

float calculateFinalBill(float subtotal) {return subtotal + (subtotal * 0.10); }


int main() {
    int choice, quantity;
    float subtotal = 0;

    do {
        showMenu();
        cout<<endl;
        cout << "Enter your choice: ";
        cin>> choice;

        if (choice>= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin>> quantity;
		}

        switch (choice) {
            case 1: subtotal += calculateItemCost(5, quantity); break;
            case 2: subtotal += calculateItemCost(8, quantity); break;
            case 3: subtotal += calculateItemCost(3, quantity); break;
            case 4: subtotal += calculateItemCost(2, quantity); break;
            case 5: subtotal += calculateItemCost(4, quantity); break;
            case 6: cout<<"Menu Closed"<<endl; break;
            default: cout << "Invalid choice!" << endl;
}
} while (choice!= 6);

    float total = calculateFinalBill(subtotal);
    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Total with 10% tax: $" << total << endl;

    return 0;
}
