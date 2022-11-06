// Phigura_zvezda.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{/*
 Задание 1. Вывести на экран фигуры заполненные звездочками. Диалог с пользователем
реализовать при помощи меню.
 */
   
        setlocale(0, "");
        int s;
        int R;
        do
        {
            cout << "Введите размерность квадрата: ";
            cin >> R;

            if (R <= 0)
            {
                cout << "Сторона квадрата должна быть больше 0." << endl;
                return 0;
            }

            cout << R"(         _______     _______     _______     _______     _______
         |*****|     |*    |     |*****|     |     |     |*****|
         | ****|     |**   |     | *** |     |     |     | *** |
         |  ***|     |***  |     |  *  |     |  *  |     |  *  |
         |   **|     |**** |     |     |     | *** |     | *** |
         |____*|     |*****|     |_____|     |*****|     |*****|
            1           2           3           4           5
         _______     _______     _______     _______     _______
         |*   *|     |*    |     |    *|     |*****|     |    *|
         |** **|     |**   |     |   **|     |**** |     |   **|
         |*****|     |***  |     |  ***|     |***  |     |  ***|
         |** **|     |**   |     |   **|     |**   |     | ****|
         |*___*|     |*____|     |____*|     |*____|     |*****|
                                                           
            6           7           8           9           10
          )" << endl;

            cout << "Выбирите вариант для построения (1-10). 0 для выхода.";
            cin >> s;

            for (int i = 1; i <= R; i++)
            {
                for (int j = 1; j <= R; j++)
                {
                    switch (s)
                    {
                    case 0: return 0;
                        break;
                    case 1: if (j >= i) cout << "*"; else cout << " ";
                        break;
                    case 2: if (j <= i) cout << "*"; else cout << " ";
                        break;
                    case 3: if (j >= i && i + j <= R + 1) cout << "*"; else cout << " ";
                        break;
                    case 4: if (j <= i && i + j >= R + 1) cout << "*"; else cout << " ";
                        break;
                    case 5: if (j >= i && i + j <= R + 1 || j <= i && i + j >= R + 1) cout << "*"; else cout << " ";
                        break;
                    case 6: if (j <= i && i + j <= R + 1 || j >= i && i + j >= R + 1) cout << "*"; else cout << " ";
                        break;
                    case 7: if (j <= i && i + j <= R + 1) cout << "*"; else cout << " ";
                        break;
                    case 8: if (j >= i && i + j >= R + 1) cout << "*"; else cout << " ";
                        break;
                    case 9: if (j + i > R + 1) cout << " "; else cout << "*";
                        break;
                    case 10: if (j + i < R + 1) cout << " "; else cout << "*";
                        break;
                    default: cout << "Неправильный выбор! Прекращение работы программы!!!" << endl;
                        return 0;
                        break;
                    }
                }
                cout << endl;
            }


        } while (s);

        return 0;
    }
