#include <stdio.h>
#include <locale.h>
int main() {
int a[4][4] = {
    { 1, 2, 3, 4},
    { 5, -6, 7, 8},
    {-1, 10, -3, 12},
    { 4, 5, 6, 7}
};
   printf("Таблица:\n");
   for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 4; j++)
   {
       printf("%4d", a[i][j]);
   }
   printf("\n");
}
  int sum = 0;
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++)
  {
      if (i + j > 3 && a[i][j] < 0) {
         sum = sum + a[i][j];
         }
      }
  }
  printf("\n1. Сумма отрицательных элементов под диагональю: %d\n", sum);
        int min = 0;
        int row = -1;
        int found = 0;
     for (int i = 0; i < 4; i++) {
         int x = a[i][1];
         if (x > 0) {
         if (found == 0 || x < min) {
            min = x;
            row = i;
            found = 1;
          }
       }
    }
    if (found == 1) {
        printf("2. Минимум во втором столбце: %d (строка %d\n", min, row + 1);
        } else {
        printf("2. Во втором столбце нет положительных чисел.\n");
        }
     if (found == 1) {
        int x = a[row][1];
        a[row][1] = a[1][3];
        a[1][3] = x;
          printf("\n3. Поменяли местами. Новая таблица:\n");
                 for (int i = 0; i < 4; i++)
          {
                    for (int j =0; j < 4; j++) {
                         printf("%4d", a[i][j]);
                    }
                    printf("\n");
                  }
                } else {
                       printf("\n3. Менять нечего. Минимума нет.\n");
                }
                return 0;
             }
