#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() 
{
    //Инициализация переменных
    int x1, y1, x2, y2;
    double res; 

    //Выбор страницы кодировки
    system("chcp 65001");
    system("cls");

    //Получение начальных условий
    printf("Введите координату X первой точки: ");
    scanf("%d",&x1);
    printf("Введите координату Y первой точки: ");
    scanf("%d",&y1);
    printf("Введите координату X второй точки: ");
    scanf("%d",&x2);
    printf("Введите координату Y второй точки: ");
    scanf("%d",&y2);

    //Вычисление
    res=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    //Вывод результата
    printf("Расстояние между точками: %1.3lf\n", res);
    system("pause");
}