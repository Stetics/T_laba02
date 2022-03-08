#T_laba02

# Part 1

1. Создайте пустой репозиторий на сервисе github.com.

`(https://github.com/Stetics/T_laba02)`

2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.

```
git config --global user.name & user.email ("...")
git config user.name & user.email ("...")
git init 
git add README.md
git commit -m "first commit"
git remote add origin git@github.com:Stetics/T_laba02.git
git push -u origin main
```

3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.

```
#include <iostream>
using namespace std;

int main(){

cout << "hello world" << endl;

return 0;
}
```

4. Добавьте этот файл в локальную копию репозитория.

`(git add hello_world.cpp)`

5. Закоммитьте изменения с осмысленным сообщением.

`(git commit -m "New file hello_world.cpp")`

6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.

```
#include <iostream>
#include <string>

using namespace std;

int main ()
{

string @name;
cout << "Name: ";
cin >> @name;
cout << endl;

cout << "Hello world from " << name << endl;
return 0;
}
```

7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?

`(git commit -m "new hello_world.cpp")`

8. Запуште изменения в удалёный репозиторий.

`(git push -u origin main)`

9. Проверьте, что история коммитов доступна в удалёный репозитории.

`()`


# Part2

