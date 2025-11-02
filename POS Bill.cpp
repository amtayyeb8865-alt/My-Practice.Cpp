#include <iostream>
#include <iomanip>  // for setw, left, right formatting
using namespace std;

int cal_bill(string customer) {
    // Item prices
    int l_pizza = 3200;
    int m_pizza = 1300;
    int s_pizza = 800;
    int zinger  = 599;
    int c_drink = 200;

    // Input quantities
    int no_lp, no_mp, no_sp, no_zinger, no_cd;

    cout << "\n--- Welcome to Pizza Palace ---\n";
    cout << "Enter order details for " << customer << ":\n\n";

    cout << "Number of large pizzas: ";
    cin >> no_lp;
    cout << "Number of medium pizzas: ";
    cin >> no_mp;
    cout << "Number of small pizzas: ";
    cin >> no_sp;
    cout << "Number of zingers: ";
    cin >> no_zinger;
    cout << "Number of cold drinks: ";
    cin >> no_cd;

    // Calculations
    int total_lp = no_lp * l_pizza;
    int total_mp = no_mp * m_pizza;
    int total_sp = no_sp * s_pizza;
    int total_zinger = no_zinger * zinger;
    int total_cd = no_cd * c_drink;
    int total_amount = total_lp + total_mp + total_sp + total_zinger + total_cd;

    // Print formatted bill
    cout << "\n\n==============================================\n";
    cout << "             PIZZA PALACE BILL\n";
    cout << "==============================================\n";
    cout << "Customer Name: " << customer << endl;
    cout << "----------------------------------------------\n";
    cout << left << setw(20) << "Item" 
         << right << setw(10) << "Qty" 
         << right << setw(15) << "Amount" << endl;
    cout << "----------------------------------------------\n";
    cout << left << setw(20) << "Large Pizza"   << right << setw(10) << no_lp      << right << setw(15) << total_lp << endl;
    cout << left << setw(20) << "Medium Pizza"  << right << setw(10) << no_mp      << right << setw(15) << total_mp << endl;
    cout << left << setw(20) << "Small Pizza"   << right << setw(10) << no_sp      << right << setw(15) << total_sp << endl;
    cout << left << setw(20) << "Zinger"        << right << setw(10) << no_zinger  << right << setw(15) << total_zinger << endl;
    cout << left << setw(20) << "Cold Drink"    << right << setw(10) << no_cd      << right << setw(15) << total_cd << endl;
    cout << "----------------------------------------------\n";
    cout << left << setw(20) << "Total Amount"  << right << setw(25) << total_amount << endl;
    cout << "==============================================\n";
    cout << "          Thank you for visiting!\n";
    cout << "==============================================\n";
    cout << "       Developed by: Tayyeb Abdullah\n";
    cout << "==============================================\n\n";

    return total_amount;
}

int main() {
    string name;
    cout << "Please enter your name: ";
    cin >> name;

    cal_bill(name);
    
    return 0;
}