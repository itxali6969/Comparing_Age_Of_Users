#include <iostream>
using namespace std;

int main() {
    int age;
    cout <<"Please enter your age: ";
	cin >>age;

    if (age > 13 && age < 18) {
        cout << "You are between the ages of 13 and 18." << endl;
    } else {
        cout << "You are not between the ages of 13 and 18." << endl;
    }

    return 0;
}

