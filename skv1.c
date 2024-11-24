#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() 
{
    //Инициализация переменных
    double x1, y1, x2, y2,RESULT; 

    //Выбор страницы кодировки
    system("chcp 65001");
    system("cls");

    //Получение начальных условий
    printf("Введите координату X первой точки: ");
    scanf("%lf",&x1);
    printf("Введите координату Y первой точки: ");
    scanf("%lf",&y1);
    printf("Введите координату X второй точки: ");
    scanf("%lf",&x2);
    printf("Введите координату Y второй точки: ");
    scanf("%lf",&y2);

    //Алгоритм расчета
    //Вычисление
    RESULT=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    //Вывод результата
    printf("Вычисленное расстояние между двумя точками на плоскости (%1.3lf, %1.3lf) и (%1.3lf, %1.3lf): : %1.3lf\n",x1, y1, x2, y2,RESULT);
    system("pause"); 
}