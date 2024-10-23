
#include <iostream>

// Задача 1.
    void SumAndProduct(int *array, int size, int *sum, int *product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; i++) {
        *sum += array[i];
        *product *= array[i];
    }
}

    // Задача 2.
    void Numbers(int *array, int size, int *positive, int *negative, int *zero) {
        *positive = 0;
        *negative = 0;
        *zero = 0;

        for (int i = 0; i < size; i++) {
            if (array[i] >= 1) {
            *positive = *positive + 1;
            }
            if (array[i] <= -1) {
                *negative = *negative + 1;
            }
            if (array[i] == 0) {
                *zero = *zero + 1;
            }
        }
    }

    // Задача 3.
    void MinMax(int *array, int size, int *min, int *max) {
        *min = array[0];
        *max = array[0];

        for (int i = 1; i < size; i++) {
            *min = array[0];
            if (array[i] < *min) {
                *min = array[i];
            }
            if (array[i] > *max) {
                *max = array[i];
            }
        }
    }

    // Задача 4.
    void Backwards(int *array, int size) {
        for (int i = 0; i < size / 2; ++i) {
            std::swap(array[i], array[size - i - 1]);
        }
        std::cout << "Массив в обратном порядке:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
    }

    // Задача 5.
    void SimpleNumbers(int *array, int size, int *Simple) {
        *Simple = 0;
        int NoSimple = 0;

        for (int i = 0; i < size; i++) {
            if (array[i] % 2 == 0) {
                NoSimple++;
            }            
        }
        *Simple = size - NoSimple;
    }
    

int main()
{
    setlocale(LC_ALL, "RUS");

    // Задача 1.
    const int size = 5;
    int arr[size] = { 1, 1, 3, 9, 4 };
    int sum = 0;
    int product = 0;
    SumAndProduct(arr, size, &sum, &product);
    std::cout << "Задача 1." << std::endl;
    std::cout << "Массив: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Сумма равна: " << sum << std::endl;
    std::cout << "Произведение чисел равно: " << product << std::endl;
    std::cout << "\n";

    // Задача 2.
    const int size1 = 5;
    int arr1[size1] = { 0, 2, 0, -4, -5 };
    int positive = 0;
    int negative = 0;
    int zero = 0;
    Numbers(arr1, size1, &positive, &negative, &zero);
    std::cout << "Задача 2." << std::endl;
    std::cout << "Массив: " << std::endl;
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Положительных чисел в массиве: " << positive << std::endl;
    std::cout << "Отрицательных чисел в массиве: " << negative << std::endl;
    std::cout << "Нулей в массиве: " << zero << std::endl;
    std::cout << "\n";

    // Задача 3.
    const int size2 = 5;
    int arr2[size2] = { 0, 90, 4, -4, -87 };
    int min = 0;
    int max = 0;
    MinMax(arr2, size2, &min, &max);
    std::cout << "Задача 3." << std::endl;
    std::cout << "Массив: " << std::endl;
    for (int i = 0; i < size2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Минимальное число в массиве: " << min << std::endl;
    std::cout << "Максимальное число в массиве: " << max << std::endl;
    std::cout << "\n";

    // Задача 4.
    const int size3 = 5;
    std::cout << "Задача 4." << std::endl;
    std::cout << "Введите элементы массива, программа поменяет порядок чисел наоборот: " << std::endl;
    int arr3[size3]{};
    for (int i = 0; i < size3; ++i) {
        std::cin >> arr3[i];
    }
    Backwards(arr3, size3);
    std::cout << "\n";

    // Задача 5.
    const int size4 = 10;
    int arr4[size4] = { 0, 11, 10, 17, 12, 50, 30, 13, 78, 19 };
    int Simple = 0;    
    std::cout << "Задача 5." << std::endl;
    std::cout << "Массив: " << std::endl;
    for (int i = 0; i < size4; i++) {
        std::cout << arr4[i] << " ";
    }
    std::cout << "\n";
    SimpleNumbers(arr4, size4, &Simple);
    std::cout << "Количество простых чисел в массиве: " << Simple << std::endl;
    std::cout << "\n";

}
