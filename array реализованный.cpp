#include <iostream>

using namespace std;

struct array {
    int size;
    double *data;
    array (int x)
    {
        cout << "Struct got size" << '\n';
        size = x;
        data = new double[size];
        cout << "size = " << x << '\n';
    }
    array (const array &A)
    {
        cout << "Struct is copying" << '\n';
        if (this != &A)
        {
            size = A.size;
        }
        data = new double[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = A.data[i];
        }
        cout << "Struct was copied" << '\n';
    }
    const array operator = (const array &A)
    {
        if (this == &A)
        {
            cout << "Struct got same size = " << A.size << '\n';
            return *this;
        }
        delete[]data;
        if (this != &A)
        {
            size = A.size;
            data = new double[size];
            for (int i = 0; i < size; i++)
            {
                data[i] = A.data[i];
            }
        }
        cout << "Struct got new size = " << A.size << '\n';
    }
};
array arr(10);

int main() {
    cout << "Enter new numbers, 0 stopping inputting" << '\n';
    int n = 0;
    cin >> n;
    while (n != 0)
    {
        arr = n;
    return 0;
}
        cin >> n;
    }
    
