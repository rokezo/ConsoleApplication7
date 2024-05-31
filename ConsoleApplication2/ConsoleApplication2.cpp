#include <iostream>
using namespace std;

void shiftArray(int arr[10][10], int shift, char direction) {
    int tempArr[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tempArr[i][j] = arr[i][j];
        }
    }

    switch (direction) {
    case 'u':
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                arr[(i + shift) % 10][j] = tempArr[i][j];
            }
        }
        break;
    case 'd':
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                arr[(i + 10 - shift) % 10][j] = tempArr[i][j];
            }
        }
        break;
    case 'l':
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
