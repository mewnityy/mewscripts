#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeData()
{
    // 1
    ofstream fout; // cout
    fout.open("data.txt");

    // 2
    cout << "Hello" << endl;
    fout << "Hello" << endl;

    // 3
    cout << "Message saved in file data.txt" << endl;

    // Fin:
    fout.close();
    cout << "\nFinish" << endl;
}

void inventory()
{
    // користувач вводить відповідь на 3 запиання: хто ви? Скільки вам років? як вас звуть? Записує відповідь у файл анкети inventory.txt
    ofstream fout;
    fout.open("inventory.txt");

    string who;
    string age;
    string name;

    cout << "хто ви? ";
    cin >> who;

    cout << "Скільки вам років? ";
    cin >> age;

    cout << "Як вас звуть? ";
    cin >> name;

    fout << "хто ви: " << who << endl;
    fout << "Скільки вам років: " << age << endl;
    fout << "Як вас звуть: " << name << endl;

    fout.close();
    cout << "\nFinish" << endl;
}

void readData()
{
    ifstream fin; // like cin
    fin.open("inventory.txt");

    string row;
    while (!fin.eof()) // eof === end of file
    {
        // fin >> row; // read only 1 word :(
        getline(fin, row); // read whole line :)
        cout << row << endl;
    }

    fin.close();
}
