// �믮���� ������� ����� ��� - 424
// ��ਠ�� ������� 1.d (���㦭���� ? ����� ���㦭���, ���頤� ��㣠, ���頤� ��㣮���� ᥪ��)

#include <iostream>
#include <string>

using namespace std;

void circle(){
    float r = 3;    // ���祭�� ࠤ��� 
    float a = 90;     // ���祭�� 㣫� ��� ���頤� ᥪ�� � �ࠤ��� 
    a = a/(57.3);     // ��ॢ�� � ࠤ����
    float l = 3.14 * 2*r;    // ����� ���㦭��� 
    float s = 3.14 *r *r;    // ���頤� ��㣠
    float s_segment =  a/2 *r *r;    // ���頤� ᥣ���� ]

    cout << l << "  " << s << "  " << s_segment << endl;
}