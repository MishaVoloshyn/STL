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
        cout << "Меню:" <<endl;
        cout << "1 Добавить" <<endl;
        cout << "2 Удалить" <<endl;
        cout << "3 Редактировать" <<endl;
        cout << "4 Поиск" <<endl;
        cout << "5 Выйти" <<endl;
        cout << "Выберите: ";
        cin >> command;

        if (command == "1") {
            string word, translation;
            cout << "Введите слово: ";
            cin >> word;
            cout << "Введите перевод: ";
            cin >> translation;
            dictionary[word] = translation;
            cout << "Слово добавлено." <<endl;
        }
        else if (command == "2") {
            string word;
            cout << "Введите слово, которое хотите удалить: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end()) {
                dictionary.erase(word);
                cout << "Слово удалено." <<endl;
            }
            else {
                cout << "Слово не найдено в словаре." <<endl;
            }
        }
        else if (command == "3") {
            string word, newTranslation;
            cout << "Введите слово, которое хотите отредактировать: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end()) {
                cout << "Введите новый перевод: ";
                cin >> newTranslation;
                dictionary[word] = newTranslation;
                cout << "Слово отредактировано." <<endl;
            }
            else {
                cout << "Слово не найдено в словаре." << endl;
            }
        }
        else if (command == "4") {
            string word;
            cout << "Введите слово для поиска: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end()) {
                cout << "Перевод: " << dictionary[word] <<endl;
            }
            else {
                cout << "Слово не найдено в словаре." <<endl;
            }
        }
        else if (command == "5") {
            break;
        }
        else {
            cout << "Неверная команда. Попробуйте снова." <<endl;
        }
    }

    return 0;
}
