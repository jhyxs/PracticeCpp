#include <iostream>
using namespace std;

int main(){
	int grade;
	
	cout<<"Enter your grade: ";
	cin>>grade;
	
	if (grade >=90){
		cout<<"Excellent!";
	}
	else if (grade >= 75){
		cout<<"Passed!";
	}
	else{
	    cout<<"Failed!";
}
return 0;
}
