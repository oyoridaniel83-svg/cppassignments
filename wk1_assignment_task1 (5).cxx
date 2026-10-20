#include <iostream>
#include <string>
#include <iomanip> // for formatting receipt

using namespace std;

int main() {
    // i. Declare variables to store required details
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalAmount;

    // Prompt user to enter details
    cout << "=== Mobile Phone Shop - Ruiru ===" << endl;
    cout << "Enter Customer Name: ";
    getline(cin, customerName); // Use getline to allow spaces in name

    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);

    cout << "Enter Quantity Bought: ";
    cin >> quantity;

    cout << "Enter Price Per Phone: Ksh ";
    cin >> pricePerPhone;

    // ii. Calculate total sales amount
    // Formula: Total Sales Amount = Quantity Bought x Price Per Phone
    totalAmount = quantity * pricePerPhone;

    // iii. Display a well-formatted receipt
    cout << "\n----------------------------------------" << endl;
    cout << "       CUSTOMER SALES RECEIPT" << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(20) << "Customer Name:" << customerName << endl;
    cout << left << setw(20) << "Phone Model:" << phoneModel << endl;
    cout << left << setw(20) << "Quantity:" << quantity << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Price Per Phone:" << "Ksh " << pricePerPhone << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(20) << "TOTAL AMOUNT:" << "Ksh " << totalAmount << endl;
    cout << "----------------------------------------" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}