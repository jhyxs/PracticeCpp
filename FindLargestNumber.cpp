#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3; //declaring 3 variables

    cout << "Enter three numbers: "; // input 3 numbers from the user
    cin >> num1 >> num2 >> num3;
    
    int largest = num1;
    
    if(num2 > largest) {
        largest = num2;
    }
    
    if(num3 > largest) {
        largest = num3;
    }
    
    cout << "Largest number is: " << largest << endl; //output the largest number
    
    return 0;
}
