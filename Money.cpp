#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "matric.h"
#include "arithmetics_easy.h"
#include "arithmetics_middle.h"
#include "arithmetics_hard.h"
#include "darts.h"
#include "kazino.h"
using namespace std;

int balance = 3;


int main()
{
    setlocale(LC_CTYPE, "rus");
    srand(time(NULL));
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    bool inputIsOK = true;
    string choiceInput = "";

    int choice = 0;


    do
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "На вашем счету " << balance << " голды." << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "Выберите, как хотите заработать деньги:" << endl
            << "1 - Матрицы(Математика)" << endl
            << "2 - Устный счет(Математика)" << endl
            << "3 - Дартс" << endl
            << "4 - Казино" << endl
            << "5 - Выход из программы" << endl
            << "Вы выбрали операцию под номером: ";

        do
        {
            getline(cin, choiceInput);
            inputIsOK = true;

            try
            {
                if (choiceInput.length() != 1) {
                    throw out_of_range("");
                }

                choice = stoi(choiceInput);
                if ((choice < 1) || (choice > 5)) {
                    throw out_of_range("");
                }
            }
            catch (...)
            {
                inputIsOK = false;
                cout << "Некорректный вариант, введите еще раз: ";
            }
        } while (!inputIsOK);

        switch (choice)
        {
        case 1:
        {
            balance = matric1(balance);
            system("cls");
            continue;
        }
        case 2:
        {
            do
            {
                system("cls");
                cout << "Выберите уровень сложности:\n 1 - легкий\n 2 - средний\n 3 - сложный\n 4 - выход в главное меню\n"
                    "Вы выбрали операцию под номером: ";


                do
                {

                    getline(cin, choiceInput);
                    inputIsOK = true;
                    try
                    {
                        if (choiceInput.length() != 1)
                        {
                            throw out_of_range("");
                        }

                        choice = stoi(choiceInput);
                        if ((choice < 1) || (choice > 4))
                        {
                            throw out_of_range("");
                        }
                    }
                    catch (...)
                    {
                        inputIsOK = false;
                        cout << "Некорректный вариант, введите еще раз: ";
                    }
                } while (!inputIsOK);


                switch (choice) {
                case 1:
                {
                    balance = operations(balance);
                    system("cls");
                    continue;
                }
                case 2:
                {
                    balance = operations_middle(balance);
                    system("cls");
                    continue;
                }
                case 3:
                {
                    balance = operations_hard(balance);
                    system("cls");
                    continue;
                }

                case 4:
                {
                    system("cls");
                    break;
                }

                }
            } while (choice != 4);
            continue;
        }
        case 3:
        {
            balance = darts(balance);
            system("cls");
            continue;
        }
        case 4:
        {
            if (balance > 0)
            {
            balance = kazino(balance);
            }
            else
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "На вашем счёте недостаточно средств." << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                system("pause");
                system("cls");
            }
            continue;
        }
        case 5:
        {
            break;
        }
        cout << endl << endl;
        default:
        {
            cout << "Некорректный вариант, введите еще раз: ";
        }
        }
    } while (choice != 5);

    return 0;
}