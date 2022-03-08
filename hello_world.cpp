#include <iostream>
#include <string>

int
main()
{

  std::string @name;

  std::cout << "Name: "; //ввод имени
  std::cin >> @name;
  std::cout << endl;

  std::cout << "hello world from " << @name << std::endl; //вывод

  return 0;
}
