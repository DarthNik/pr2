# Консольная утилита


## Процесс сборки
```
git clone https://github.com/DarthNik/pr2.git && cd pr2
mkdir build && cd build
cmake ..
make 
```


## Пример использования
-Отобразить всех пользователей и их домашние директории:
```
./program -u 
или
./programm --users
```
-Отобразить запущенные процессы, упорядоченные по pid:
```
./program -p
или
./program --processes
```
-Отобразить сообщение о помощи:
```
./program -h
или
./program --help
```
-Перенаправить вывод в файл:
```
./program -l PATH -u
или
./program --log PATH -u
```
>Если указанного PATH не существует, то по умолчанию создаётся файл PATH


-Перенаправить вывод ошибок в файл:
```
./program -e PATH -t
или
./program --errors PATH -t
```
>Если указанного PATH не существует, то по умолчанию создаётся файл PATH
