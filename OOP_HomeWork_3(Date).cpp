#include "Date.h"
#include "Time.h"



int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//примеры по работе с датами
	
	//Date A(6, 2, 2021);
	//Date B(5, 2, 2020);
	//
	//bool result = A > B;
	//cout << boolalpha << result << endl;

	//bool result_2 = A != B;
	//cout << boolalpha << result_2 << endl;

	//int b = A - B;  // разница в днях между двумя датами
	//cout << b << endl;

	//A = A + 20;  // добавление к дате целочисленного значения для изменения даты
	//A.Show_date();
	//A--; // пример перегруженного опрератора постфиксного и префиксного инкремента\декремента
	//A.Show_date();
	//cout << endl;

	// примеры по работе с временем

	Time a(40, 59, 23);
	a.Print_time();
	a=a + 120;
	a.Print_time();
	cout << endl;

	Time b(59, 59, 23);
	b.Print_time();
	++b;
	b.Print_time();
	b++;
	b.Print_time();

	cout << endl;
	Time c(0, 59, 23);
	c--;
	c.Print_time();
	--c;
	c.Print_time();

	cout << endl;
	Time d(1, 45, 22);
	Time f(1, 43, 22);
	bool diff = d > f;
	cout <<boolalpha<< diff << endl;

	
	
	

	return 0;
	
}