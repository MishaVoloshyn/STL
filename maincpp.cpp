/*
#include<iostream>
#include<vector>



int main()
{
	vector<int> vec{ 1,2,3,4,5 };
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

	vector<int>::iterator ptr;

	for (ptr = vec.begin();ptr!=vec.end(); ptr++)
	{
		cout << *ptr;
	}
}
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    map<string,string> dictionary;
    string command;

    while (true) {
        cout << "����:" <<endl;
        cout << "1 ��������" <<endl;
        cout << "2 �������" <<endl;
        cout << "3 �������������" <<endl;
        cout << "4 �����" <<endl;
        cout << "5 �����" <<endl;
        cout << "��������: ";
        cin >> command;

        if (command == "1") {
            string word, translation;
            cout << "������� �����: ";
            cin >> word;
            cout << "������� �������: ";
            cin >> translation;
            dictionary[word] = translation;
            cout << "����� ���������." <<endl;
        }
        else if (command == "2") {
            string word;
            cout << "������� �����, ������� ������ �������: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end()) {
                dictionary.erase(word);
                cout << "����� �������." <<endl;
            }
            else {
                cout << "����� �� ������� � �������." <<endl;
            }
        }
        else if (command == "3") {
            string word, newTranslation;
            cout << "������� �����, ������� ������ ���������������: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end()) {
                cout << "������� ����� �������: ";
                cin >> newTranslation;
                dictionary[word] = newTranslation;
                cout << "����� ���������������." <<endl;
            }
            else {
                cout << "����� �� ������� � �������." << endl;
            }
        }
        else if (command == "4") {
            string word;
            cout << "������� ����� ��� ������: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end()) {
                cout << "�������: " << dictionary[word] <<endl;
            }
            else {
                cout << "����� �� ������� � �������." <<endl;
            }
        }
        else if (command == "5") {
            break;
        }
        else {
            cout << "�������� �������. ���������� �����." <<endl;
        }
    }

    return 0;
}
