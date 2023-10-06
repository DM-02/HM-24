//
//  main.cpp
//  HM-24
//
//  Created by Дмитрий Сергеевич on 06.10.2023.
//

#include <iostream>


//task2
void resize_arr(int*& arr, int currentLen, int newLen) {
    int* newArr = new int[newLen];
    for (int i = 0; i < newLen; i++) {
        if (i < currentLen) {
            newArr[i] = arr[i];
        } else {
            newArr[i] = 0;
        }
    }
    delete[] arr;
    arr = newArr;
}


int main(int argc, const char * argv[]) {
    
    //task1
    // Ввод размеров массивов A и B
       int n, m;
       std::cout << "Введите размер массива A: ";
       std::cin >> n;
       std::cout << "Введите размер массива B: ";
       std::cin >> m;

       // Создание массивов A и B
       int* A = new int[n];
       int* B = new int[m];

       // Ввод элементов массива A
       std::cout << "Введите элементы массива A:\n";
       for (int i = 0; i < n; i++) {
           std::cin >> A[i];
       }

       // Ввод элементов массива B
       std::cout << "Введите элементы массива B:\n";
       for (int i = 0; i < m; i++) {
           std::cin >> B[i];
       }

       // Создание массива C суммарного размера
       int* C = new int[n + m];

       // Копирование элементов из массива A в массив C
       for (int i = 0; i < n; i++) {
           C[i] = A[i];
       }

       // Копирование элементов из массива B в массив C
       for (int i = 0; i < m; i++) {
           C[n + i] = B[i];
       }

       // Вывод элементов массива C
       std::cout << "Массив C, состоящий из элементов массивов A и B:\n";
       for (int i = 0; i < n + m; i++) {
           std::cout << C[i] << " ";
       }
       std::cout << std::endl;

       // Освобождение памяти, занятой массивами A, B и C
       delete[] A;
       delete[] B;
       delete[] C;

    
    
    //task2
       int currentLen = 5;
       int* arr = new int[currentLen];
       for (int i = 0; i < currentLen; i++) {
           arr[i] = i + 1;
       }
       
       int newLen = 10;
       resize_arr(arr, currentLen, newLen);
       
       for (int i = 0; i < newLen; i++) {
           std::cout << arr[i] << " ";
       }
       
       delete[] arr;


    return 0;
}
