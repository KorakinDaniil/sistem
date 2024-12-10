#include <iostream>

using namespace std;

void displayMenu()
{
    cout << "Выберите категорию:\n";
    cout << "1 - Фрукты\n";
    cout << "2 - Животные\n";
    cout << "3 - Страны\n";
    cout << "4 - Города\n";
    cout << "5 - Растения\n";
    cout << "0 - Выход\n";
}

int main()
{
    int category;

    while(true)
    {
        displayMenu();
        cout << "Введите номер категории: ";
        cin >> category;

        switch (category)
        {
            case 1:
                cout << "Вы выбрали категорию: Фрукты.\n";
                break;
            case 2:
                cout << "Вы выбрали категорию: Животные.\n";
                break;
            case 3:
                cout << "Вы выбрали категорию: Страны.\n";
                break;
            case 4:
                cout << "Вы выбрали категорию: Города.\n";
                break;
            case 5:
                cout << "Вы выбрали категорию: Растения.\n";
                break;
            case 0:
                cout << "Выход из программы.\n";
                return 0;
            default:
                cout << "Некорректный ввод. Пожалуйста, попробуйте снова.\n";
        }
        cout << endl;
    }
    return 0;
}
