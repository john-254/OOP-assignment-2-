#include <iostream>
#include <string>
using namespace std;

class Subscriber {
  private:
    string name;
    string phone_number;
    double airtime_amount;
    int bonus_points;

  public:
    Subscriber(string n, string pn, double aa) {
      name = n;
      phone_number = pn;
      airtime_amount = aa;
      bonus_points = compute_bonuspoints();
    }

    int compute_bonuspoints() {
      if (airtime_amount >= 2000.0) {
        return 500;
      } else if (airtime_amount >= 1000.0) {
        return 300;
      } else if (airtime_amount >= 500.0) {
        return 100;
      } else if (airtime_amount >= 100.0) {
        return 50;
      } else {
        return 0;
      }
    }

    void display_info() {
      cout << name << " : (PHONE NO: " << phone_number << "): AWARDED "
           << bonus_points << " BONGA POINTS. STAY WITH SAFARICOM. THE BETTER OPTION!\n";
    }
};

int main() {
  string name, phone_number;
  double airtime_amount;
  cout << "Enter Subscriber name: ";
  getline(cin, name);
  cout << "Enter Phone number: ";
  getline(cin, phone_number);
  cout << "Enter Airtime amount: ";
  cin >> airtime_amount;

  Subscriber subscriber(name, phone_number, airtime_amount);
  subscriber.display_info();

  return 0;
}
