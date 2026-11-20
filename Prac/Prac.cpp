#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Вывод текста!\n";
	int grade;
	cout << "Что поставите? ";
	cin >> grade;
	cout << "Вы поставили оценку: " << grade << endl;

	if (grade >= 5)
	{
		cout << "Отлично!" << endl;
	}
	else if (grade >= 4)
	{
		cout << "Хорошо!" << endl;
	}
	else if (grade >= 3)
	{
		cout << "Удовлетворительно!" << endl;
	}
	else
	{
		cout << "Неудовлетворительно!" << endl;
	}
	return 0;
}