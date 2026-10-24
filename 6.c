#include <stdio.h>
void generatePermutations(int arr[], int start, int size) {
    if (start == size) {
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = start; i < size; i++) {
        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        generatePermutations(arr, start + 1, size);

        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, m;
    
    printf("Введите N и M через пробел: ");
    if (scanf("%d %d", &n, &m) != 2) {
        printf("Ошибка ввода. Введите числа.\n");
        return 1;
    }
    if (n <= 0 || m <= 0 || n > m) {
        printf("Некорректные данные. Должны выполняться условия: N, M > 0 и N <= M.\n");
        return 1;
    }

    int size = m - n + 1;
    int arr[size]; 

    for (int i = 0; i < size; i++) {
        arr[i] = n + i;
    }

    printf("Вывод:\n");
    generatePermutations(arr, 0, size);

    return 0;
}

