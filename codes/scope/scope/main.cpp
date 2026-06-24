#include<iostream>

int main() {
	{
		int a = 10;
		int b = 20;
		std::cout << "int a+b = " << a + b << std::endl;
		std::cout << "int a-b = " << a - b << std::endl;
		std::cout << "int a*b = " << a * b << std::endl;
		std::cout << "int a/b = " << a / b << std::endl;
		std::cout << "int a%b = " << a % b << std::endl;
	}

	{
		float a = 10.5;
		float b = 20.5;
		std::cout << "float a+b = " << a + b << std::endl;
		std::cout << "float a-b = " << a - b << std::endl;
		std::cout << "float a*b = " << a * b << std::endl;
		std::cout << "float a/b = " << a / b << std::endl;
		/*std::cout << "float a%b = " << a % b << std::endl;*/
		/*运算符是否只能用于整数，取决于你使用的编程语言。
		在 C、C++ 等语言中， % 是取余（remainder） 运算符，仅能用于整数。
		在 Python、Java、JavaScript 等语言中， % 是取模（modulo） 运算符，可以用于浮点数。*/
	
	}

	{
		double a = 30.5;
		double b = 40.5;
		std::cout << "double a+b = " << a + b << std::endl;
		std::cout << "double a-b = " << a - b << std::endl;
		std::cout << "double a*b = " << a * b << std::endl;
		std::cout << "double a/b = " << a / b << std::endl;
	
	}


	return 0;
}