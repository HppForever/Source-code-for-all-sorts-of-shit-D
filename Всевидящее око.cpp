#include <iostream>    
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std; // Говорим компилятору что мы хотим использовать все имена из пронстранства имен "std"

short ColorTextConsole(short);      // Обьявляем прототип функции "ColorTextConsole"
void GodsFavorite();               // Обьявляем прототип функции "GodsFavorite"
void CringeMan();                 // Обьявляем прототип функции "CringeMan"
void AlgorithmCondition(short);  // Обьявляем прототип функции "AlgorithmCondition"


void main()

{
   short UserText; // Обьявляем переменную "UserText" типа "short" (число) значение которой мы получим от пользователя

   setlocale(LC_ALL, "Russian"); // Ну тут и так понятно все :)

   system("mode con cols=100 lines=50"); // Изменяем размер консольного окна

   ReturnChoice: // Метка "ReturnChoice" для функции "goto"

   ColorTextConsole(14); // Yellow color text

   cout << "____________$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_________$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "________$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$__$$$__$$$$$" << "\n";
                     Sleep(100);
   cout << "_______$$$$$__$$$__$$$$$" << "\n";
                     Sleep(100);
   cout << "________$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_________$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_________$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___________$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___________$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "____$$$_____$$$$$$$_____$$$" << "\n";
                     Sleep(100);
   cout << "____$$$$$____$$$$$____$$$$$" << "\n";
                     Sleep(100);
   cout << "____$$$$$$$_________$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___$$$$$$$$$$$$_$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___________$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_________$$$$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "_____$$$$$$$$$$_$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___$$$$$$$$$$_____$$$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___$$$$$$$$_________$$$$$$$$" << "\n";
                     Sleep(100);
   cout << "___$$$$$$$___________$$$$$$$" << "\n";
                     Sleep(100);
   cout << "______$$$_____________$$$" << "\n\n\n";
                     Sleep(100);

   cout << "(ОКО) Я все видеющиеоко и знаю ответ на любой важный и не очень вопрос!" << "\n"; Sleep(1000);
   cout << "(ОКО) Задавай любой вопрос или ты можешь выбрать часто задаваемые из списка" << "\n\n"; Sleep(1000);
   cout << "1. Самый позорный человек в 2023 году" << "\n";
   cout << "2. Бог фанатеет от этого чувака" << "\n\n";

   ColorTextConsole(3); // Blue color text

   cout << "(МЫ) ";

   cin >> UserText; // Пользователь пишет свой текст в переменную "UserText"

   if (UserText != 1 && UserText != 2)

   {
       return;
   }

   AlgorithmCondition(UserText);

   system("Cls"); // Чистим экран для повторного ответа

   goto ReturnChoice; // Отправляемся к метке "ReturnChoice" с помощью функции "goto"
}



/*==========================================Функции==========================================*/



short ColorTextConsole(short Color) // Функция будет окрашивать наш консольный текст в разные цвета

{
    HANDLE DescriptorConsole; // Обьявляем дескриптор
    DescriptorConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем дескриптор консольного окна
    SetConsoleTextAttribute(DescriptorConsole, Color); // Теперь наш консольный текст будет окрашиваться в цвет заданный относительно алгоритму программы

    return Color; // Возвращаем функцией цвет консоли и тем самым завершаем ее
}


void GodsFavorite() // Функция будет открывать канал бога браузере

{
    ShellExecuteA(NULL, "open", "https://www.youtube.com/channel/UCBpKIOFyoa08l24dRevCgVg", NULL, NULL, SW_SHOWNORMAL);
}


void CringeMan() // Функция будет открывать канал нищего в браузере

{
    ShellExecuteA(NULL, "open", "https://www.youtube.com/@neverfix1337", NULL, NULL, SW_SHOWNORMAL);
}


void AlgorithmCondition(short UserText) // Функция будет вызывать функции открытия канала в зависимости от значения полученного параметра

{
    if (UserText == 1)

    {
        CringeMan();
    }

    if (UserText == 2)

    {
        GodsFavorite();
    }
}
