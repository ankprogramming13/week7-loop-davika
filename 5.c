#include <iostream>

using namespace std;

int main ()
{

    int num = 0;
    // การหาเลขคู่ และแสดงเฉพาะเลขคู่

    while( num < 65535 )
    {
        if ((num % 2) == 0)
        {
            cout << num << endl;
        }
        num++;
    }

    return 0;
}