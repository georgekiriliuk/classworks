

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	string characters[12]{ "Бомж Петя Иванович","Винни Пух","Муравъед","Утконос","Курица","Шашлындос","Василий Петрович","Свинка Пеппа","Карлсон","Курт Кобейн","Трамп", "Путин" };
	int i = rand() % 12;
	cout << characters[i] << " ";
	string action[5]{ "Играет в карты","Пъет детское шампанское","Высиживает яйца", "Рассказивает анекдоты", "Лузгает семечки" };
	int a = rand() % 5;
	cout << action[a] << " ";
	string reason[5]{ "Чтоб стать известным", "Чтоб муж подарил шубу","Потому что на улице зима", "Потому что любить общатся", "Потому что жизнь потягала" };
	int b = rand() % 5;
	cout << reason[b] << " ";
}

