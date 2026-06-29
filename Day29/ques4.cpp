#include <iostream>
#include <string>
using namespace std;
struct Product {
    int id;
    string name;
    int quantity;
    float price;
};
int main() {
    Product p[100];
    int n = 0, choice, searchId, newQty;
    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product by ID\n";
        cout << "4. Update Product Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "\nEnter Product ID: ";
            cin >> p[n].id;
            cout << "Enter Product Name: ";
            cin >> p[n].name;
            cout << "Enter Quantity: ";
            cin >> p[n].quantity;
            cout << "Enter Price: ";
            cin >> p[n].price;
            n++;
            cout << "Product added successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No products available!\n";
            } else {
                cout << "\n----- Product List -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "Product ID : " << p[i].id << endl;
                    cout << "Name       : " << p[i].name << endl;
                    cout << "Quantity   : " << p[i].quantity << endl;
                    cout << "Price      : Rs. " << p[i].price << endl;
                    cout << "--------------------------\n";
                }
            }
            break;
        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> searchId;
            {
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (p[i].id == searchId) {
                        cout << "\nProduct Found!\n";
                        cout << "Product ID : " << p[i].id << endl;
                        cout << "Name       : " << p[i].name << endl;
                        cout << "Quantity   : " << p[i].quantity << endl;
                        cout << "Price      : Rs. " << p[i].price << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Product not found!\n";
            }
            break;
        case 4:
            cout << "Enter Product ID: ";
            cin >> searchId;
            {
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (p[i].id == searchId) {
                        cout << "Current Quantity: " << p[i].quantity << endl;
                        cout << "Enter New Quantity: ";
                        cin >> newQty;
                        p[i].quantity = newQty;
                        cout << "Quantity updated successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Product not found!\n";
            }
            break;
        case 5:
            cout << "Exiting Inventory Management System...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}