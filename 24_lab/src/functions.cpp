#include "functions.h"

int recursive(int array[], int key, int left, int right) {
    int mid = (left + right) / 2;
    if (array[mid] == key) {
        return mid;
    }
    if (left < right) {

        if (array[mid] < key) {
            return recursive(array, key, mid + 1, right);
        }
        if (array[mid] > key) {
            return recursive(array, key, left, mid - 1);
        }

    } else {
        return -1;
    }
}

int find(int array[], int size, int key, bool type) {
    if (type == 0) {
        int left = 0;
        int mid;
        int right = size;
        while (1) {
            mid = ((right + left) / 2);
            if (left > right) {
                return -1;
            } else if (key < array[mid]) {
                right = mid - 1;
            } else if (key > array[mid]) {
                left = mid + 1;
            } else if (key == array[mid]) {
                return mid;
            }
        }
    }
    return recursive(array, key, 0, size - 1);
}