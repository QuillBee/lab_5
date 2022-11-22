/*
  Задача:
  Реализовать в виде класса тип данных "комплексное число" x = re + im*i.
  Реализовать конструкторы, деструктор, сеттеры и геттеры,
  операции с комплексными числами: +, *, <<, >>, =, потоковые ввод и вывод
  Автор : А. Е. Анисимов
  */

#include <iostream>
#include <iomanip>
//#include "Complex.h"
#include "ComplexVector.h"
using namespace std;

int main()
{
	/*cout << "--- Objects a and b ---------------- " << endl;
	Complex a(1.5, 2.5), b(3.1);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	a.set_re(10.0);
	a.set_im(-5.0);
	cout << "a = " << a << endl;

	cout << "--- Sum and product ----------------------" << endl;
	Complex c;
	c = a + b;
	cout << "a + b = " << c << endl;
	c = a * b;
	cout << "a * b = " << c << endl;	

	cout << "a + b = " << a + b<< endl;

	cout << "--- Copy contructor --------------------" << endl;
	Complex original(1.0, 2.0);
	cout << "Original = " << original << endl;
	Complex copy(original);
	cout << "Copy = " << copy << endl;

	
	cout << "--- Input from cin --------------------" << endl;
	Complex d;
	cout << "Input d" << endl;
	cin >> d;
	cout << "d = " << d << endl;
	*/

	Complex A_X, A_Y, A_Z;
	ComplexVector A(A_X, A_Y, A_Z);
	
	cout << 1 << A_X << endl;
	Complex c = A.get_coordX();
	cout << c;
	//ComplexVector A(A_X, A_Y, A_Z);

	//Complex c(A.get_coordX())
	//cout << c;
	//cout << A.get_coordX() << A.get_coordX() << A.get_coordX()

	system("pause");
}