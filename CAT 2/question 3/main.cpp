#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Voter {
  private:
    string voter_card_id;
    string national_id;
    string first_name;
    string middle_name;
    string surname;
    string polling_station;
    string date_of_birth;
    char gender;
  public:
    Voter() {}
    Voter(string vc, string nid, string fn, string mn, string sn, string ps, string dob, char g) {
        voter_card_id = vc;
        national_id = nid;
        first_name = fn;
        middle_name = mn;
        surname = sn;
        polling_station = ps;
        date_of_birth = dob;
        gender = g;
    }
    void set_voter_details(string vc, string nid, string fn, string mn, string sn, string ps, string dob, char g) {
        voter_card_id = vc;
        national_id = nid;
        first_name = fn;
        middle_name = mn;
        surname = sn;
        polling_station = ps;
        date_of_birth = dob;
        gender = g;
    }
    string get_voter_card_id() {
        return voter_card_id;
    }
    string get_national_id() {
        return national_id;
    }
    string get_first_name() {
        return first_name;
    }
    string get_middle_name() {
        return middle_name;
    }
    string get_surname() {
        return surname;
    }
    string get_polling_station() {
        return polling_station;
    }
    string get_date_of_birth() {
        return date_of_birth;
    }
    char get_gender() {
        return gender;
    }
};
int main() {
    vector<Voter> voter_list;
    int option = -1;
    while (option != 0) {
        cout << "Welcome to the Electronic Voting Management System" << endl;
        cout << "1. Add new voter" << endl;
        cout << "2. Delete voter" << endl;
        cout << "3. Display voter details" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter option: ";
        cin >> option;
        switch (option) {
            case 1: {
                string vc, nid, fn, mn, sn, ps, dob;
                char g;
                cout << "Enter voter card ID: ";
                cin >> vc;
                cout << "Enter national ID number: ";
                cin >> nid;
                cout << "Enter first name: ";
                cin >> fn;
                cout << "Enter middle name: ";
                cin >> mn;
                cout << "Enter surname: ";
                cin >> sn;
                cout << "Enter polling station: ";
                cin >> ps;
                cout << "Enter date of birth (dd-mm-yyyy): ";
                cin >> dob;
                cout << "Enter gender (M/F): ";
                cin >> g;
                Voter new_voter(vc, nid, fn, mn, sn, ps, dob, g);
                voter_list.push_back(new_voter);
                cout << "New voter added successfully!" << endl;
                break;
            }
            case 2: {
                string vc;
                cout << "Enter voter card ID to delete: ";
                cin >> vc;
                for (auto it = voter_list.begin(); it != voter_list.end(); ++it) {
                    if (it->get_voter_card_id() == vc) {
                        voter_list.erase(it);
                        cout << "Voter deleted successfully!" << endl;
                        break;
                    }
                }
                break;
            }
                    case 3: {
            string vc;
            cout << "Enter voter card ID to display details: ";
            cin >> vc;
            for (auto it = voter_list.begin(); it != voter_list.end(); ++it) {
                if (it->get_voter_card_id() == vc) {
                    cout << "Voter Details:" << endl;
                    cout << "Voter Card ID: " << it->get_voter_card_id() << endl;
                    cout << "National ID: " << it->get_national_id() << endl;
                    cout << "Name: " << it->get_first_name() << " " << it->get_middle_name() << " " << it->get_surname() << endl;
                    cout << "Polling Station: " << it->get_polling_station() << endl;
                    cout << "Date of Birth: " << it->get_date_of_birth() << endl;
                    cout << "Gender: " << it->get_gender() << endl;
                    break;
                }
            }
            break;
        }
        case 0: {
            cout << "Exiting Electronic Voting Management System" << endl;
            break;
        }
        default: {
            cout << "Invalid option selected. Please try again." << endl;
            break;
        }
    }

    cout << endl;
}
return 0;
}
