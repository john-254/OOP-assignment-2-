#include <iostream>
#include <string>

using namespace std;

class Vehicle {
  private:
    string make;
    string model;
    string engine_number;
    double sale_price;

  public:
    void set_vehicle(string Nissan, string sunny, string eng_no, double SP) {
        //creating a class that captures data using set value
        Nissan = make;
        model = model;
        engine_number = eng_no;
        sale_price = SP;
    }

    double get_profit() { //function get profit
        return sale_price * 0.15;
    }
    string get_model() {
        return model;
    }
};

int main() {
    Vehicle car;
    car.set_vehicle("Nissan", "Sunny", "1234", 1000000);
    cout << "Model: " << car.get_model() << endl;
    cout << "Profit: " << car.get_profit() << endl;
    return 0;
}

