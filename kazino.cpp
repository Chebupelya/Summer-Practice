#include "kazino.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int kazino(int balance)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << endl << "���� ������ ������� � ���, ����� ������� �� ��� ��������� - �� �������, ������ ��� ������." << endl;
    cout << "��� ���������� ������� ��� �������� ��� ����� ��������� 2 �����. ��� ���������� �������, ��� ������ �����������." << endl;
    cout << "�� ������ ������ ��������� 1 �����." << endl;
    system("pause");
    system("cls");
    cout << "�� ��� ������� �����?" << endl << "1 - �������, 2 - ������, 3 - ������" << endl;
    int what; cin >> what;
    switch (what)
    {
    case 1:
    {
        int a = rand() % 101;
        if (a < 50)
        {
            cout << "�����������! ������ �������!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "�� ��� ���� ���� ��������� 2 �����" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            return balance + 2;
        }
        else
        {
            cout << "� ���������, ��� �� �������." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "� ������ ����� ���� ����� 1 �����." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            balance--;
            return balance;
        }
        break;
    }
    case 2:
    {
        int b = rand() % 101;
        if (b >= 50 && b <= 100)
        {
            cout << "�����������! ������ ������!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "�� ��� ���� ���� ��������� 2 �����" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            return balance + 2;
        }
        else
        {
            cout << "� ���������, ��� �� �������." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "� ������ ����� ���� ����� 1 �����." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            balance--;
            return balance;
        }
        break;
    }
    case 3:
    {
        int c = rand() % 101;
        int rand1 = rand() % 101, rand2 = rand() % 101, rand3 = rand() % 101, rand4 = rand() % 101, rand5 = rand() % 101;
        if (rand1 == c || rand2 == c || rand3 == c || rand4 == c || rand5 == c)
        {
            cout << "�����������! ������ ������!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "��� ������ ��� ������." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            return balance*2;
        }
        else
        {
            cout << "� ���������, ��� �� �������." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            cout << "� ������ ����� ���� ����� 1 �����." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            system("pause");
            system("cls");
            balance--;
            return balance;
        }
        break;
    }
    default:
        cout << "������ ���." << endl;
        system("pause");
        system("cls");
        break;
    }
}