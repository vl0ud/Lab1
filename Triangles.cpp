// Выполнил задание Медведев АБс-424.
// Вариант задания 1.b  Треугольник ? периметр, площадь по формуле Герона, проверка на равнобедренность.

#include <iostream>    // Библеотеки для ввода и вывода данных в терминал 
#include <string>
#include <cmath>  

using namespace std;
struct sides{   // Структура с сторонами
    float x, y, z;
};

void triangle(){
    sides A;    // Значения сторон
    A.x = 3; A.y = 4; A.z = 5;
    float per = A.x + A.y + A.z;    // Периметр
    float pl_ger = sqrt((per/2)*(per/2 - A.x)*(per/2 - A.y)*(per/2 - A.z));    // Площадь Герона
    bool bedr = false;
    if (A.x == A.y || A.x == A.z || A.y == A.z) bedr = true;    // Проверка на равнобердренность

    cout << per << "  " << pl_ger << "  " << bedr << endl;    // Периметр  Площадь  Равнобедренность 
};