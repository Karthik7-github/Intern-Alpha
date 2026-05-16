#include <iostream>
#include <vector>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
};

vector<Product> inventory;

void addProduct() {
    Product p;
    cout << "Enter Product ID: ";
    cin >> p.id;
    cout << "Enter Product Name: ";
    cin >> p.name;
    cout << "Enter Quantity: ";
    cin >> p.quantity;

    inventory.push_back(p);
    cout << "✅ Product Added!\n";
}

void updateProduct() {
    int id;
    cout << "Enter Product ID to update: ";
    cin >> id;

    for (auto &p : inventory) {
        if (p.id == id) {
            cout << "Enter new quantity: ";
            cin >> p.quantity;
            cout << "✅ Updated!\n";
            return;
        }
    }
    cout << "❌ Product not found!\n";
}

void displayProducts() {
    cout << "\n📦 Inventory:\n";
    for (auto p : inventory) {
        cout << "ID: " << p.id << " | Name: " << p.name << " | Qty: " << p.quantity << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Product\n";
        cout << "2. Update Product\n";
        cout << "3. Display Products\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addProduct(); break;
            case 2: updateProduct(); break;
            case 3: displayProducts(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}