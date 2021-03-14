#include <stdio.h>

#define ARR_SIZE 10

#define OK 0
#define WRONG_INPUT -1

int get_array_from_user(int *arr_begin, int *arr_end);
int get_elements_amount(int *arr_begin, int *arr_end, int value);
int get_unique_numbers_amount(int *arr_begin, int *arr_end);
void print_array(int *array, int arr_size);

int main()
{
    int array[ARR_SIZE];
    int *array_end = array + ARR_SIZE;

    int exit_code = get_array_from_user(array, array_end);
    
    if (exit_code != OK)
        return exit_code;

    int unique_numbers_amount = get_unique_numbers_amount(array, array_end);

    printf("%d", unique_numbers_amount);

    return exit_code;
}

int get_array_from_user(int *array, int *array_end)
{
    while (array < array_end)
    {
        if (scanf("%d", array) != 1)
            return WRONG_INPUT;

        array++;
    }

    return OK;
}

void print_array(int *array, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
        printf("%d ", array[i]);
}

int get_elements_amount(int *arr_begin, int *arr_end, int value)
{
    int result = 0;

    while (arr_begin < arr_end)
    {
        if (*arr_begin == value)
            result++;

        arr_begin++;
    }

    return result;
}

int get_unique_numbers_amount(int *arr_begin, int *arr_end)
{
    int result = 0;
    int *current_element = arr_begin;

    while (current_element < arr_end)
    {
        if (get_elements_amount(arr_begin, arr_end, *current_element) == 1)
            result ++;

        current_element++;
    }

    return result;
}
