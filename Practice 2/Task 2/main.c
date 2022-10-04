#include <stdio.h>
#include <stdlib.h>


int* get_array(int size, int* arr) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
    return arr;
}

int* add(int item, int sizeOfArray, int* arr) {
    arr[sizeOfArray] = item;
    return arr;
}

int* insert(int item, int size, int* arr) {
    for(int i = size-1; i >= size / 2; i--){
        arr[i + 1] = arr[i];
    }
    arr[size/2] = item;
    return arr;
}

int get_size(int size){
    return size;
}

int* delete(int index, int size, int *arr) {
    for(int i = 0; i < size; i++) {
        if(i >= index-1) {
            arr[i] = arr[i + 1];
        }
    }
    return arr;
}

int* change(int index, int new_element, int* arr) {
    arr[index-1] = new_element;
    return arr;
}

int get_element(int index, int* arr) {
    return arr[index-1];
}

void print(int size, int* arr) {
    printf(" [ ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]");
}

int main() {
    int size = 6;
    int* arr = (int*)malloc(size * sizeof(int));;
    arr = get_array(size, arr);
    int flag;
    int item = 0;
    int new_element = 0;


    while(1) {
        printf("\n(1) Add an item to the end of the list \n"
               "(2) Inserting an element into the middle of the list \n"
               "(3) The number of elements in the array \n"
               "(4) Deleting an element by index \n"
               "(5) Change an existing element by index \n"
               "(6) Obtaining the value of a given element \n"
               "(0) Exit\n"
               "->: ");
        scanf("%d", &flag);
        switch(flag) {
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);
                printf("Before ->");
                print(size, arr);
                add(item, size, arr);
                size = size + 1;
                printf("\nAfter ->");
                print(size, arr);
                break;
            case 2:
                printf("Enter the item: ");
                scanf("%d", &item);
                printf("Before ->");
                print(size, arr);
                size = size + 1;
                insert(item, size, arr);
                printf("\nAfter ->");
                print(size, arr);
                break;
            case 3:
                printf("Number of elements = %d", get_size(size));
                break;
            case 4:
                printf("Enter the index: ");
                scanf("%d", &item);
                printf("Before ->");
                print(size, arr);
                delete(item, size, arr);
                size = size-1;
                printf("\nAfter ->");
                print(size, arr);
                break;
            case 5:
                printf("Enter the index: ");
                scanf("%d", &item);
                printf("Enter the value of the element by index: ");
                scanf("%d", &new_element);
                printf("Before ->");
                print(size, arr);
                change(item, new_element, arr);
                printf("\nAfter ->");
                print(size, arr);
                break;
            case 6:
                printf("Enter the index: ");
                scanf("%d", &item);
                printf("Your element = %d\n", get_element(item, arr));
                print(size, arr);
                break;
            case 0:
                free(arr);
                exit(0);
        }
    }
}
