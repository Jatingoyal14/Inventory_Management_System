/*

                                Developed By : JATIN GOYAL [CSE STUDENT] 
                                College : AMITY UNIVERSITY GWALIOR
                                BATCH : 2022-26 
*/



#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include<algorithm>
using namespace std;

class Item {
public:
    int id;
    string name;
    int quantity;
    float price;

   void input() {
    cout << "Enter Item ID: ";
    cin >> id;
    cin.ignore();
    do {
        cout << "Enter Item Name: ";
        getline(cin, name);
        if (name.empty()) cout << "Name cannot be empty.\n";
    } while (name.empty());

    do {
        cout << "Enter Quantity: ";
        cin >> quantity;
        if (quantity < 0) cout << "Quantity must be >= 0\n";
    } while (quantity < 0);

    do {
        cout << "Enter Price: ";
        cin >> price;
        if (price < 0) cout << "Price must be >= 0\n";
    } while (price < 0);
}


    void display() const {
        cout << left << setw(10) << id << setw(20) << name
             << setw(10) << quantity << setw(10) << price << endl;
    }
};

// Global inventory vector
vector<Item> inventory;

void saveToFile() {
    ofstream out("inventory.txt");
    for (auto& item : inventory) {
        out << item.id << "," << item.name << "," << item.quantity << "," << item.price << endl;
    }
    out.close();
}

void loadFromFile() {
    ifstream in("inventory.txt");
    inventory.clear();
    string line;
    while (getline(in, line)) {
        Item item;
        sscanf(line.c_str(), "%d,%[^,],%d,%f", &item.id, &item.name[0], &item.quantity, &item.price);
        inventory.push_back(item);
    }
    in.close();
}

void sortInventory() {
    int ch;
    cout << "Sort by:\n1. Name\n2. Quantity\nEnter choice: ";
    cin >> ch;

    if (ch == 1) {
        sort(inventory.begin(), inventory.end(), [](Item a, Item b) {
            return a.name < b.name;
        });
        cout << "Sorted by name.\n";
    } else if (ch == 2) {
        sort(inventory.begin(), inventory.end(), [](Item a, Item b) {
            return a.quantity < b.quantity;
        });
        cout << "Sorted by quantity.\n";
    } else {
        cout << "Invalid choice.\n";
    }
}


void addItem() {
    Item item;
    item.input();
    inventory.push_back(item);
    cout << "Item added successfully.\n";
}

void displayAll() {
    cout << left << setw(10) << "ID" << setw(20) << "Name"
         << setw(10) << "Qty" << setw(10) << "Price" << endl;
    for (const auto& item : inventory) {
        item.display();
    }
}

void searchItem() {
    int id;
    cout << "Enter ID to search: "; cin >> id;
    for (const auto& item : inventory) {
        if (item.id == id) {
            cout << "Item Found:\n";
            item.display();
            return;
        }
    }
    cout << "Item not found.\n";
}

void updateItem() {
    int id;
    cout << "Enter ID to update: "; cin >> id;
    for (auto& item : inventory) {
        if (item.id == id) {
            cout << "Enter new details:\n";
            item.input();
            cout << "Item updated.\n";
            return;
        }
    }
    cout << "Item not found.\n";
}

void deleteItem() {
    int id;
    cout << "Enter ID to delete: "; cin >> id;
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->id == id) {
            inventory.erase(it);
            cout << "Item deleted.\n";
            return;
        }
    }
    cout << "Item not found.\n";
}
void showLowStockItems() {
    cout << "\n--- Low Stock Items (Qty < 5) ---\n";
    bool found = false;
    for (const auto& item : inventory) {
        if (item.quantity < 5) {
            item.display();
            found = true;
        }
    }
    if (!found) cout << "No low stock items.\n";
    
}
void exportReport() {
    ofstream file("report.csv");
    file << "ID,Name,Quantity,Price\n";
    for (const auto& item : inventory) {
        file << item.id << "," << item.name << "," << item.quantity << "," << item.price << "\n";
    }
    file.close();
    cout << "Report exported to report.csv\n";
}


bool login() {
    string user, pass;
    int attempts = 0;

    const string USERNAME = "Jatin";
    const string PASSWORD = "1407";

    while (attempts < 3) {
        cout << "Login Required\n";
        cout << "Username: ";
        cin >> user;
        cout << "Password: ";
        cin >> pass;

        if (user == USERNAME && pass == PASSWORD) {
            cout << " Login successful.\n";
            return true;
        } else {
            cout << "Invalid credentials. Try again.\n";
            attempts++;
        }
    }

    cout << " Too many failed attempts. Exiting...\n";
    return false;
}

int main() {

    if (!login()) return 0; 
    loadFromFile();
    int choice;
    do {
        cout << "\n--- Inventory Management ---\n";
        cout << "1. Add Item\n2. Display All\n3. Search Item\n4. Update Item\n5. Delete Item\n6. Save & Exit\n7. Show Low Stock Items\n8. Sort Inventory\n9. Export Report\n10. Save & Exit\n";
;
        cout << "Enter choice: ";
        cin >> choice;
               switch (choice) {
            case 1: addItem(); break;
            case 2: displayAll(); break;
            case 3: searchItem(); break;
            case 4: updateItem(); break;
            case 5: deleteItem(); break;
            case 6: saveToFile(); break;
            case 7: showLowStockItems(); break;
            case 8: sortInventory(); break;
            case 9: exportReport(); break;
            case 10: saveToFile(); cout << "Data saved. Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 10);

    return 0;
}

