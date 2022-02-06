//2. Дано рядок символів. Визначити кількість літер, цифр та інших символів, присутніх у рядку.
#include<iostream>;
#include <locale>;
#include "windows.h";
#include <string>	
using namespace std;

int main()
{
	SetConsoleCP(1251);//загуглив варіант рішення відображення української мови в консолі
	SetConsoleOutputCP(1251);//загуглив варіант рішення відображення української мови в консолі
	string text;
	cout << "Введіть будь ласка якийсь англійський текст " << endl;	
	getline(cin, text);		
	int size = text.size();		
	int letter = 0;			//Змінна для  букв
	int number = 0;			//Змінна для цифр
	for (int i = 0; i < size; i++)//запускаємо цикл для первірки кожного елементу 
	{
		if (isalpha(text[i])) {	//salpha() функція яка рахує букви в тексті, але прошу врахувати лише англійські літери(((((
			letter++;			
		}
		if (isdigit(text[i])) {	//функція яка рахує циіри в тексті 
			number++;				

		}
	}
	cout << endl;
	cout << "Розмір тексту дорівнює = " << text.size() << endl;	//виводимо оновлений рядок.
	cout << "Букв у тексті  = " << letter << endl;	//виводимо кількість букв
	cout << "Цифр у тексті = " << number << endl;	//виводимо кількість цифр.
	cout << "Інших символів у тексті = " << text.size() - letter -  number<< endl;	//виводимо кількість інших символів.
}