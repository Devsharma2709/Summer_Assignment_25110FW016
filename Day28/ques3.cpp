#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int totalTickets = 50;
    int bookedTickets = 0;
    int choice, tickets;
    cout << "===== Ticket Booking System =====\n";
    cout << "Enter Customer Name: ";
    cin >> name;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. View Available Tickets\n";
        cout << "2. Book Tickets\n";
        cout << "3. Check Remaining Tickets\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Available Tickets: " << totalTickets << endl;
                break;
            case 2:
                cout << "Enter number of tickets to book: ";
                cin >> tickets;
                if (tickets > 0 && tickets <= totalTickets) {
                    totalTickets -= tickets;
                    bookedTickets += tickets;
                    cout << "Booking Successful!\n";
                    cout << "Customer Name : " << name << endl;
                    cout << "Tickets Booked: " << tickets << endl;
                    cout << "Remaining Tickets: " << totalTickets << endl;
                } else {
                    cout << "Sorry! Requested tickets are not available.\n";
                }
                break;
            case 3:
                cout << "Remaining Tickets: " << totalTickets << endl;
                break;
            case 4:
                cout << "Thank you for using the Ticket Booking System!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}