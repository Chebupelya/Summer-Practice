#include "darts.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int darts(int balance)
{
    cout << endl << "���� ������ ������� � ���, ����� ������� ������ �� ������ �������." << endl;
    system("pause");
    system("cls");
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int random = rand() % 25;
    char ch = alphabet[random];
    string press;
    cout << "������� �� ����� " << ch << endl;
    clock_t start = clock();
    cout << "�������� �����: "; cin >> press; cout << endl;
    clock_t end = clock();
    int ms = end - start;
    if (press.length() == 1)
    {
    if (press[0] == ch)
    {
        if (ms < 1500)
        {
            cout << "�� ������ ������� ������ �� ������ �����!" << endl;
            HANDLE hConsole;
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "�� ���������� 1 �����." << endl;
            balance++;
            cout << "��� ������ ������ ���������� " << balance << " �����." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            return balance;
        }
        else
        {
            cout << "�� �� ������ ������� ������ �� ������ �����!" << endl;
            system("pause");
            system("cls");
            return balance;
        }
    }
    else
    {
        cout << "�� ������ �� �� �� �����!" << endl;
        system("pause");
        system("cls");
        return balance;
    }
    }
    else
    {
        cout << "�������!" << endl;
        system("pause");
        system("cls");
        return balance;
    }
}