#include <iostream>

using namespace std;

int main ()
{
    int number;
    cin >> number;
    cout << "Base\tMul\tResult" << endl;
    for( int a = 1; a < 13; a = a + 1 )
    {
        cout << number << "\t" << a << "\t" << number*a << endl;

    }
    return 0;


    /* เขียนโปรแกรมตารางแม่สูตรคูณที่แสดงผลดังนี้

    Base    Mul   Result
    2       1     2
    2       2     4
    2       3     6
    2       4     8
    2       5     10
    2       6     12
    2       7     14
    2       8     16
    2       9     18
    2       10    20
    2       11    22
    2       12    24

    */
}