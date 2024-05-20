#include <iostream>
#include <vector>
using namespace std;

class Item {
private:
    int itemCode;
    double itemPrice;

public:
    Item(int code, double price) : itemCode(code), itemPrice(price) {}

    int getCode() const {
        return itemCode;
    }

    double getPrice() const {
        return itemPrice;
    }
};

class ShoppingList {
private:
    vector<Item> items;

public:
    void addItem(int code, double price) {
        items.push_back(Item(code, price));
    }

    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getCode() == code) {
                items.erase(it);
                break;
            }
        }
    }

    double getTotalValue() const {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.getPrice();
        }
        return total;
    }

    void displayItems() const {
        cout << "Shopping List:" << endl;
        for (const auto& item : items) {
            cout << "Item Code: " << item.getCode() << ", Price: " << item.getPrice() << endl;
        }
    }
};

int main() {
    ShoppingList myList;

    myList.addItem(101, 10.99);
    myList.addItem(102, 5.49);
    myList.addItem(103, 7.75);

    myList.displayItems();

    myList.deleteItem(102);

    cout << "\nAfter deleting item with code 102:" << endl;
    myList.displayItems();

    cout << "\nTotal value of orders: " << myList.getTotalValue() << endl;

    return 0;
}