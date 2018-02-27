#include <iostream>

using namespace std;

int main() {

    int m;
    cin >> m;

    if (m >= 90) {
        cout << "A" << endl;
    }

else if (m>=80) {
            cout << "B";
        }
    else if (m>=70) {
        cout << "C" << endl;
    }

    else if  (m>=60){
        cout << "D";
    }

 else if  (m < 60){
cout << "F";
}
}
