#include <stdio.h>

int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // �S��������
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; // �����ȡA�^�ǯ���
    } else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key); // �b�����j�M
    } else {
        return binarySearch(array, mid + 1, end, key); // �b�k���j�M
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchKey = 6;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = binarySearch(numbers, 0, size - 1, searchKey);

    if (result != -1) {
        printf("��� %d �b�}�C�������ެ� %d\n", searchKey, result);
    } else {
        printf("�䤣����� %d\n", searchKey);
    }
    
	system("pause");
    return 0;
}
 
