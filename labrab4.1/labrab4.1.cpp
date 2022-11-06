// labrab4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Weapon.h"
#include "MyMath.h"
#include <Windows.h>
#include "Characteristic.h"
using namespace std;
int MyMath::counter = 0;
int main()
{
    setlocale(LC_ALL, "");
    Weapon sword("меч", 10, 2);
    cout << sword.getName() << "\n";
    cout << sword.getDamage() << "\n";
    cout << sword.getWeight() << "\n";
    sword.setDamage(10);
    //paragraph 6
    Characteristic wer(5);
    wer.getDamage(&sword, 5);
    MyMath m1(2,3);
    MyMath m2(3,4);
    MyMath m3(4,5);
    MyMath m4(10, 2);
    cout << "Add= " << m1.Add(2,3) << endl;
    cout << "Sub= " << m2.Sub(3,4) << endl;
    cout << "Mult=  " << m3.Mult(5,6) << endl;
    cout << "Div=  " << m4.Div(10, 2) << endl;
    cout << MyMath::counter << " -counter" << endl;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
