#include <iostream>

using namespace std;

int main () {

  cout << "Sum of Natural Numbers using loop" << endl << endl ;

  int i = 0;
  int posInputNumber = 0;
  int sum = 0;
  cin >> posInputNumber;

  // TODO: ��������Ѻ�����Ũҡ����� ��� posInputNumber

  // FIXME: ��䢡�÷ӧҹ�ͧ loop for ����ʴ����������� 0 - ��ҷ�������Ѻ�� (posInputNumber)
  for (i = 0; i <= posInputNumber ; i++) {
    sum += i;
  }

  cout << "Sum of 0-" << i-1 << " is " << sum << endl;

  return 0;
}