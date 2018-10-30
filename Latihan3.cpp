#include<iostream>

using namespace std;

int main() {

    int A, B, C;
    cout << "masukkan bilangan 1: ";
    cin >> A;
    cout << "masukkan bilangan 2: ";
    cin >> B;
    cout << "masukkan bilangan 3: ";
    cin >> C;

    if (A<B) {
        if (B<C)
                cout << "bilangan tengah adalah:" << B << endl;
    else
        if (A<C)
            cout << "bilangan tengah adalah: " << C << endl;
        else cout << "bilangan tengah adalah: " << A << endl;
    } else {
    if (A<C)
        cout << "blangan tengah adalah: " << A << endl;
    else
        if (B<C)

        cout << "bilangan tengah adalah: " << C << endl;
    else
        cout << "bilangan tengah adalah: " << B << endl;
    }
}
