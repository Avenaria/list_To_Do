
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <string>
#include<fstream>
/// <summary>
///возмоно сделать двумерный массив куда всё запихнуть,но какой ????
/// </summary>
 int* arrlist[5][10];


using namespace std;
struct list {
	char name[25];

	int priority[5];// приоретет 
	char description[256];/// описание 
	int dey;//день
	int dey2;

	int manth;//месяц
	int manth2;//месяц
	int year;//год
	int year2;//год
	int time_To_Do;// время исполнения. ?( или функция)
}*plist;

void entermass(list&priority, int size, int size2, int arrlist) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < siz2; j++) {
			arrlist[i] = plist->priority;
		}


	}
}

void enter_list(list& plist) {
	int priority = 0;// слишком много букв , можно ли сократить? 
	cout << "Введите Название задачи  ";
	cin >> plist.name;
	cout << "Крадкое описание задачи  ";
	cin >> plist.description;
	cout << "Приоритет задачи от 1 до 5; ";
	cin >> priority;
	cout << " введите год - ";
	cin >> plist.year;
	cout << " введите месяц - ";
	cin >> plist.manth;
	cout << " введите день - ";
	cin >> plist.dey;
	cout << " введите год исполнения  - ";
	cin >> plist.year2;
	cout << " введите месяц исполнения - ";
	cin >> plist.manth2;
	cout << " введите день  исполнение - ";
	cin >> plist.dey2;

}
void time_To_Do( list plist ) {
	int time_To_Do = 0; /// через массив или обычный расчёт времени с прошедшей даты? 



}
void Show_cases(list &plist)
{
	string date1 = "";
	int a = 0;
	int d = 0, n = 0, m = 0;
	cout<< "хотите отобразить все дела на день, на неделю или на месяц? нажмите от 1 до 3:"; cin >> a;
	if (a > 3)
	{
		cout << "нет такого параметра" "\n"<< "попробуй еще раз";
		cin>> a;

	}
	else if (a = 1)
	{
		time_To_Do(date, date1);// тот же вопрос


	}
}
void delet( list &plist, int size, int index) // вот тут вариант через массив, 
{
	bool b = 0;
	cout << "вы точно хотите удалить: "<< plist[index].name; cin >> b;
	if (b)
	{
		plist[index].name = '/0';


	}
}
int findList(list& plist, int size, int prior, string name = "", string ops = "", string date = "")
{
	for (int i = 0; i < size; i++)
	{
		if (plist[i].name == name)
		{
			return i;
		}
		else if (plist[i].prior == prior)
		{
			return i;
		}
		else if (plist[i].ops == ops)
		{
			return i;
		}
		else if (plist[i].date == date)
		{
			return i;
		}
	}
	cout << "Такое задание отсутствует! "<< endl;
	cout << " \a";
	return -1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	int choice;
	list temp;
	string new_note;
	system("color 5E");
	do {
		cout << "\t\t++++Список дел!++++++\n";
		cout << "\t\t======================\n";
		cout << "\tЧто вы хотетите предпринять? \n";
		cout << " 1 - Добавить задачу  \n";
		cout << " 2 - Удалить задачу  \n";
		cout << " 3 - Редактировать задачу  \n";
		cout << " 4 - Найти задачу  \n";
		cout << " 5 - Посмотреть весь список задач   \n";
		cout << " 6 - Выход    \n";
		cout << " ==============================   \n";
		cin >> choice;


		switch (choice)
		{

		case 1:
			enter_list(*plist);

			break;
		case 2:
			delet( *plist, int size, int index);
			break;
		case 3:
			break;
		case 4:
			findList();
			break;
		case 5:
			Show_cases(*plist);
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cout << "\a";
			cout << "Такого пункта нет в меню, читай внимательно!! " << endl;
			break;
		}
	} while (choice != 6);
	{
		cout << "Приятной работы ";
	}
}