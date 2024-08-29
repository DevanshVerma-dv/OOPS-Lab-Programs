#include <iostream>

using namespace std;

class Hotel {
    private:
        int room_no;
        string name;
        int tariff;
        int nod;
        float calc() {
            float amount = nod * tariff;
            if (amount > 10000) amount *= 1.05;
            return amount;
        }

    public:
        void checkin(int room_no, string name, int tariff, int nod) {
            this -> room_no = room_no;
            this -> name = name;
            this -> tariff = tariff;
            this -> nod = nod;
        }

        void checkout() {
            cout << "Name: " << name << endl;
            cout << "Room no: " << room_no << endl;
            cout << "Tariff: " << tariff << endl;
            cout << "NOD: " << nod << endl;
            cout << "Total amount: " << calc() << endl;
            cout << endl;
        }
};

int main () {
    int n;
    cout << "Enter number of customers: ";
    cin >> n;
    
    int room_no;
    string name;
    int tariff;
    int nod;

    for (int i = 0; i < n; i++) {
        Hotel customer;

        cout << "Enter room number: ";
        cin >> room_no;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter tariff: ";
        cin >> tariff;
        cout << "Enter number of days: ";
        cin >> nod;

        customer.checkin(room_no, name, tariff, nod);
        customer.checkout();
    }

    return 0;
}
