// �믮���� ������� �������� ���-424.
// ��ਠ�� ������� 1.b  ��㣮�쭨� ? ��ਬ���, ���頤� �� ��㫥 ��஭�, �஢�ઠ �� ࠢ�����७�����.

#include <iostream>    // ������⥪� ��� ����� � �뢮�� ������ � �ନ��� 
#include <string>
#include <cmath>  

using namespace std;
struct sides{   // ������� � ��஭���
    float x, y, z;
};

void triangle(){
    sides A;    // ���祭�� ��஭
    A.x = 3; A.y = 4; A.z = 5;
    float per = A.x + A.y + A.z;    // ��ਬ���
    float pl_ger = sqrt((per/2)*(per/2 - A.x)*(per/2 - A.y)*(per/2 - A.z));    // ���頤� ��஭�
    bool bedr = false;
    if (A.x == A.y || A.x == A.z || A.y == A.z) bedr = true;    // �஢�ઠ �� ࠢ�����७�����

    cout << per << "  " << pl_ger << "  " << bedr << endl;    // ��ਬ���  ���頤�  ��������७����� 
};