#include <iostream>
#include <string>
using namespace std;

int main(){ //personal information program
    string name, address;
    int age;

    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you? ";
    cin >> age;
    cout << "Where do you live? ";
    cin >> address;
    cout << "Your name is " << name << ", you are " << age << " years old, and you live in " << address << "." << endl;

    return 0;
}