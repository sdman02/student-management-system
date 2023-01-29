#include "Class.h"
#include <vector>
#include <fstream>
#include <string>
#include <Windows.h>

using std::vector, std::cout, std::getline;

void readData(const string filename, vector<Class>&classes){

    std::ifstream din;
    din.open(filename);

    if (!din.is_open()){
        cout << "[ERROR] " << filename << " could not be opened...\n"; 
    }

    string name;
    string code;
    string strCredits;
    int credits;
    string school;

    while (!din.eof()){
        getline(din, name, ',');
        getline(din, code, ',');
        getline(din, strCredits, ',');
        getline(din, school, '\n');

        credits = std::stoi(strCredits);

        Class classItem(name, code, credits, school);
        classes.push_back(classItem);
    }

    din.close();
}

void displayMenu(){

    system("cls");

    cout << "\t\t\t\t\t\t\t\t\t\t";
    cout << "Enter option: \n";

    cout << "\t\t\t\t\t\t\t\t\t\t";
    cout << "1.\tView Classes\n";


}



int main(){

    vector<Class> classes;
    string filename = "data.csv";
    string userInput;

    readData(filename, classes);

    do {
        displayMenu();
        cout << "\t\t\t\t\t\t\t\t\t\t";
        std::cin >> userInput;

        if (userInput == "1"){
            for (int i = 0; i < classes.size(); i++){
                    classes[i].print();
                    cout << '\n';
            }
            cout << "\t\t\t\t\t\t\t\t\t\tEnter 1 to go back to menu...";
            std::cin >> userInput;
        }
        else{
            cout << "\t\t\t\t\t\t\t\t\t\t";
            cout << "Invalid Input\n";
        }

    }while (userInput != "-1");

    return 0;
}