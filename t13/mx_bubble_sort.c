#include<stddef.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int count = 0;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(mx_strcmp(arr[j], arr[j + 1]) > 0) {
                count++;
                char *t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    return count;
}
    
