#include<iostream>
using namespace std;

class ElectricityBill {
private:
    string consumerName;
    int units;
    float billAmount;

public:
    // Default Constructor
    ElectricityBill() {
        consumerName = "Not Assigned";
        units = 0;
        billAmount = 0;
    }

    // Parameterized Constructor
    ElectricityBill(string name, int u) {
        consumerName = name;
        units = u;
        billAmount = 0;
    }

    // Calculate Bill
    void calculateBill() {
        if (units <= 100) {
            billAmount = units * 5;
        }
        else if (units <= 200) {
            billAmount = (100 * 5) + (units - 100) * 7;
        }
        else {
            billAmount = (100 * 5) + (100 * 7) + (units - 200) * 10;
        }
    }

    // Display Bill
    void displayBill() {
        cout << "\n--- Electricity Bill ---";
        cout << "\nConsumer Name: " << consumerName;
        cout << "\nUnits Consumed: " << units;
        cout << "\nTotal Bill Amount: ₹" << billAmount << endl;
    }
};

int main() {
    // Object using default constructor
    ElectricityBill e1;

    // Object using parameterized constructor
    ElectricityBill e2("Mahi", 250);

    // Calculate and display bills
    e1.calculateBill();
    e1.displayBill();

    e2.calculateBill();
    e2.displayBill();

    return 0;
}