/*Define a class Hotel in C++ with the following specifications
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the
value of days* Tariff >10000,
then total amount is 1.05* days*Tariff.
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff, NOD
and Amount (amount to be displayed by calling function) CALC()
*/

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
    Hotel customer[n];
    
    int room_no;
    string name;
    int tariff;
    int nod;

    for (int i = 0; i < n; i++) {

        cout << "Enter room number, name, tariff, number of days: ";
        cin >> room_no >> name >> tariff >> nod;

        customer[i].checkin(room_no, name, tariff, nod);
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        customer[i].checkout();
    }

    return 0;
}
