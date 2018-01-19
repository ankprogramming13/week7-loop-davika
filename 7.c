#include <iostream>

using namespace std;

int main ()
{


    int a = 0;
    int num, sum=0, avg;

    // while loop execution
    while( a < 5 )
    {
        cout << "Enter" << a + 1 << "Number: ";
        cin >> num;
        sum = sum + num;
        a++;
    }
    avg = (float) sum / 5;
    cout << "Total" << "\t" << avg;
    // เขียนโปรแกรมเพื่อรับค่าตัวเลข 5 จำนวน และหาค่าเฉลี่ย

    return 0;
}