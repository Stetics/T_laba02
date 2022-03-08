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

cout << "Hello world from " << @name << endl;

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

1. В локальной копии репозитория создайте локальную ветку patch1.

![image](https://user-images.githubusercontent.com/91694520/157333956-6a6610bf-3434-4d34-9b67-30d11ca42beb.png)

2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.

```
#include <iostream>
#include <string>

int main ()
{

std::string @name;
std::cout << "Name: ";
std::cin >> @name;
std::cout << endl;

std::cout << "Hello world from " << @name << std::endl;

return 0;
}
```

3. commit, push локальную ветку в удалённый репозиторий.

![image](https://user-images.githubusercontent.com/91694520/157334390-1ac6dc33-eff8-4bc0-9d54-f775edf5df79.png)

4. Проверьте, что ветка patch1 доступна в удалёный репозитории.

5. Создайте pull-request patch1 -> master.

![image](https://user-images.githubusercontent.com/91694520/157334539-a051097a-0ae5-469e-9842-cfee0230b9ec.png)

6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.

```
#include <iostream>
#include <string>

int main ()
{

std::string @name;
std::cout << "Name: ";
std::cin >> @name;//ввод
std::cout << endl;

std::cout << "Hello world from " << @name << std::endl;

return 0;
}
```

7. commit, push.

![image](https://user-images.githubusercontent.com/91694520/157334803-3bcb9623-d8f5-46b2-8253-7d29e0476cfa.png)

8. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request

![image](https://user-images.githubusercontent.com/91694520/157335034-e1fc74e4-c7ca-42fe-983b-ef30ff198460.png)


9 & 12. В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.

![image](https://user-images.githubusercontent.com/91694520/157335153-f2c2a9b1-819c-4f2d-9100-470141d3ec20.png)


10. Локально выполните pull.

`(git pull origin)`

11. С помощью команды git log просмотрите историю в локальной версии ветки master.

![image](https://user-images.githubusercontent.com/91694520/157335259-dd497d49-9af6-408d-9252-c4df94e37cc9.png)

# Part 3

1. Создайте новую локальную ветку patch2.

![image](https://user-images.githubusercontent.com/91694520/157335364-659fabf5-6ef6-413d-b0c1-a49f5b2bd126.png)

2. Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.


![image](https://user-images.githubusercontent.com/91694520/157335401-d5cf3bee-9011-4a0b-b547-f99756b1a3b3.png)


3. commit, push, создайте pull-request patch2 -> master.

![image](https://user-images.githubusercontent.com/91694520/157335517-ee4d827e-d58d-45ef-8bc2-2984fb1c6d90.png)


4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.

5. Убедитесь, что в pull-request появились конфликтны.

![image](https://user-images.githubusercontent.com/91694520/157335679-9c6c99fd-010e-48ec-bc36-b25c0e4be20c.png)

6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.

![image](https://user-images.githubusercontent.com/91694520/157335836-beb170d0-aa85-4c8c-9323-1bc8505dcb56.png)

7.Сделайте force push в ветку patch2

![image](https://user-images.githubusercontent.com/91694520/157335962-59ba871d-72b9-4c32-b0b4-fc9850136936.png)

8.Убедитель, что в pull-request пропали конфликтны.

![image](https://user-images.githubusercontent.com/91694520/157336026-ac96dc3d-2f66-4383-a0a9-787fa13ec636.png)

9. Вмержите pull-request patch2 -> master.

![image](https://user-images.githubusercontent.com/91694520/157336147-8e4f4eef-ad40-4677-b661-1b5a671ef56d.png)
