#include <iostream>

int main() {
}

//1.membandingkan elemen yang beredekatan dengan cara satu per satu
// 
//2.menentukan icrement  square dan memisahkan array menjadi sub array
// 
//3. algoritma insertion sort karena membandingkan data satu per satu dengan cara membandingkan setiap elemen dengan elemen sebelumnya

//4. 
#include <iostream>
  using namespace std;

    int a[14]{};
    int n;

    void input() {
        while (true)
        { 

            cout << "EKO RAMADHAN: ";
        cin >> n;
        if (n <= 14) {
            break;
        }
        else
        {
            cout << "\nEKO RAMADHAN dapat mempunyai maksimal 14 element\n";
        }
    }

    cout << endl;
    cout << "================" << endl;
    cout << "EKO RAMADHAN" << endl;
    cout << "================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke" << (i + 1) << "; ";
        cin >> a[i];
    }
}
    void bubblesort() {
    int pass = 1;
    do
    {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        pass = pass + 1;
    } while (pass <= n - 1);

}

void display() {
    cout << endl;
    cout << "==============" << endl;
    cout << "Element EKO RMADHAN yang telah tersusun" << endl;
    cout << "==============" << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;


    }
    cout << "jumlah pass" << n - 1 << endl;
    cout << endl;
}
