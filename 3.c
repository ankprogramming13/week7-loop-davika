#include <iostream>

using namespace std;

int main() {

  cout << "For to while" << endl;

  // ตัวอย่างโปรแกรมที่ใช้ for

  int i = 0;
  int a = 0;

  for (i = 0; i < 10; i++) {
    cout << "Run from for" << endl;
  }
  while( a < 10 ) {
      cout << "Run from while" << endl;
      a++;
    }
  cout << "***********END FOR***********" << endl;

  // เขียนโปรแกรมที่ทำงานเหมือนด้านบนโดยใช้ while แทน for



  return 0;
}