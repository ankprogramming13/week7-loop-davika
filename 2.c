#include <iostream>

using namespace std;

int main () {

  cout << "Sum of Natural Numbers using loop" << endl << endl ;

  int i = 0;
  int posInputNumber = 0;
  int sum = 0;
  cin >> posInputNumber;

  // TODO: เพิ่มการรับข้อมูลจากผู้ใช้ ให้ posInputNumber

  // FIXME: แก้ไขการทำงานของ loop for ให้แสดงผลรวมตั้งแต่ 0 - ค่าที่ผู้ใช้รับมา (posInputNumber)
  for (i = 0; i <= posInputNumber ; i++) {
    sum += i;
  }

  cout << "Sum of 0-" << i-1 << " is " << sum << endl;

  return 0;
}