#include <iostream>
#include <string>

int
main()
{

  std::string @name;

  std::cout << "Name: ";

<<<<<<< HEAD
  std::cin >> @name; //ввод
  std::cout << endl; //переход
=======
std::cout << "Name: ";
std::cin >> @name;//ввод
std::cout<< endl;//переход
>>>>>>> 8e8d1057dbe1b9ebe73bd22b1994131cd465dfe8

  std::cout << "hello world from " << @name << std::endl; //вывод

  return 0;
}
