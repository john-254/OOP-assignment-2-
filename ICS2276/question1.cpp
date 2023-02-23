#include <iostream>

using namespace std;

// Define base class Computer
class Computer {
public:
    string name;
    string operatingSystem;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Operating System: " << operatingSystem << endl;
    }
};

// Define subclasses Client and Server
class Client : public Computer {
public:
    int memory;
    string graphicsCard;

    void display() {
        Computer::display();
        cout << "Memory: " << memory << " GB" << endl;
        cout << "Graphics Card: " << graphicsCard << endl;
    }

    void runApplication(string appName) {
        cout << "Running " << appName << " on client computer" << endl;
    }
};

class Server : public Computer {
public:
    int storage;
    string backupMethod;

    void display() {
        Computer::display();
        cout << "Storage: " << storage << " TB" << endl;
        cout << "Backup Method: " << backupMethod << endl;
    }

    void backupData() {
        cout << "Backing up data on server" << endl;
    }
};

int main() {
    // Create some example objects
    Client client;
    client.name = "Laptop";
    client.operatingSystem = "Windows 10";
    client.memory = 8;
    client.graphicsCard = "Nvidia GeForce GTX 1050";

    Server server;
    server.name = "File Server";
    server.operatingSystem = "Ubuntu 20.04 LTS";
    server.storage = 10;
    server.backupMethod = "Daily backups to external hard drive";

    // Display the details of the objects
    cout << "Client:" << endl;
    client.display();
    cout << endl;

    cout << "Server:" << endl;
    server.display();
    cout << endl;

    // Run an application on the client computer and backup data on the server
    client.runApplication("Microsoft Word");
    server.backupData();

    return 0;
}
