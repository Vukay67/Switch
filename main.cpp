#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num_1, num_2, cha, result;
    cout << "Введите первое число: ";
    cin >> num_1;
    cout << "Введите второе число: ";
    cin >> num_2; 
    cout << "1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Остаток от деление\nВыберите оператора:";
    cin >> cha;
// 1
    if (num_2 == 0 && cha == 4)
        cout << "На 0 делить нельза";
    else {
        switch (cha)
        {
            case 1:result = num_1 + num_2; cout << "Ответ:" << result; break;
            case 2:result = num_1 - num_2; cout << "Ответ:" << result; break;
            case 3:result = num_1 * num_2; cout << "Ответ:" << result; break;
            case 4:result = num_1 / num_2; cout << "Ответ:" << result; break;
            case 5:result = num_1 % num_2; cout << "Ответ:" << result; break;
            default:cout << "Такой оператор не существует";
        }
    }

// 2
    int day;
    cout << "Введите номера дней недели: ";
    cin >> day;
    switch (day)
    {
        case 1:cout << "Понедельник"; break;
        case 2:cout << "Вторник"; break;
        case 3:cout << "Среда"; break;
        case 4:cout << "Четверг"; break;
        case 5:cout << "Пятница"; break;
        case 6:cout << "Суббота"; break;
        case 7:cout << "Воскресенье"; break;
        default:cout << "Ошибка!";

    }

}