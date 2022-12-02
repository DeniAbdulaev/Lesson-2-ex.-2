#include <iostream>
using namespace std;


struct info_of_username {
	long num;
	string name;
	long double balanc;
};
void my_swap(long double &a, long double &b)
{
	long double c = a;
	a = b;
	c = b;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	info_of_username your_info;

	std::cout << "Ваш номер счета: " << std::endl;
	std::cin >> your_info.num;

	std::cout << "Ваше имя:" << std::endl;
	std::cin >> your_info.name;

	std::cout << "Ваш баланс: " << std::endl;
	std::cin >> your_info.balanc;

	long double new_balanc = 0;
	std::cout << "Ваш новый баланс: " << std::endl;
	std::cin >> new_balanc;

	my_swap(your_info.balanc, new_balanc);

	std::cout << "Ваш счет: " << your_info.num << " " << your_info.name << " " << your_info.balanc << std::endl;
}