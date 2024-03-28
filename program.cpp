#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <thread>

using namespace std;

int main() {
    char name[50];
    char user[50];
    cout << ">Welcome to Kare, what is your roblox mod file? ";
    cin >> user;
    cout << "Processing data...";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Done!";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "Please enter your File name!";
    cin >> name;

    ofstream file("output.txt");
    file << "Name: " << name << endl;
    file.close();

    cout << "Your file name is: " << name << endl;
  
    ifstream inputFile("output.txt");
    if (inputFile.is_open()) {
        string data;
        while (getline(inputFile, data)) {
            cout << "Data from file: " << data << endl;
        }
        inputFile.close();
    } else {
      cout << "Oops! we were unable to open file.. Your possible file format is loadable. The supported formats are one the github!" << endl;
    }
  }