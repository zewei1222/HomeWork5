#include <stdio.h>

int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // 沒有找到鍵值
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; // 找到鍵值，回傳索引
    } else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key); // 在左側搜尋
    } else {
        return binarySearch(array, mid + 1, end, key); // 在右側搜尋
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchKey = 6;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = binarySearch(numbers, 0, size - 1, searchKey);

    if (result != -1) {
        printf("鍵值 %d 在陣列中的索引為 %d\n", searchKey, result);
    } else {
        printf("找不到鍵值 %d\n", searchKey);
    }
    
	system("pause");
    return 0;
}
 
