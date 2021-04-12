#include "functions.h"

int find(int array[], int length, int target, bool type) {
    int index{0};
    if (length == 0) index = -1;

    bool flag = false;
    int l = array[0];
    int r = array[length - 1];
    int mid{0};

    while ((l <= r) && (flag != true)) {
        mid = (l + r) / 2;

        if (array[mid] == target) {
            flag = true;
            index = mid;
        }
        if (array[mid] > target) r = mid - 1;
        else l = mid + 1;
    }
    return index;
}

int find(int array[], int length, int target) {
    int index{0};
    if (length == 0) index = -1;

    bool flag = false;
    int index_l{0};
    int index_r{length-1};
    int l = array[index_l];
    int r = array[index_r];
    int mid;

    while ((l <= r) && (flag != true)) {
        mid = (index_l + index_r) / 2;

        if (array[mid] == target) {
            flag = true;
            index = mid;
        }
        if (array[mid] > target) {
            find(array, length/2, target);
        } else {
            array =
            find(array, length/2, target);
        }
    }
    return index;
}