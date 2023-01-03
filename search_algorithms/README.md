# **Search Algorithms**

## **Requirements**
* All files will be compiled on Ubuntu 20.04 LTS using `gcc`
* All files should end with a new line
* A `README.md` file, at the root of the folder of the project
* Code should use the `Betty` style
* Not allowed to use global variables
* No more than 5 functions per file
* Allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, … is forbidden
* The prototypes of all functions should be included in the header file called `search_algos.h`
* All header files should be include guarded

## Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89```


## **Files**
* **0-linear.c**:
Function that searches for a value in an array of integers using the Linear search algorithm.
     - Prototype: `int linear_search(int *array, size_t size, int value);`
     - Where `array` is a pointer to the first element of the array to search in
     - `size` is the number of elements in `array`
     - And `value` is the value to search for
     - Function must return the first index where `value` is located
     - If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
     - Every time we compare a value in the array to the value we are searching, we have to print this value
* **1-binary.c**:
Function that searches for a value in a sorted array of integers using the Binary search algorithm
     - Prototype: `int binary_search(int *array, size_t size, int value);`
     - Where `array` is a pointer to the first element of the array to search in
     - `size` is the number of elements in `array`
     - And `value` is the value to search for
     - Function must return the first index where `value` is located
     - Assume that `array` will be sorted in ascending order
     - Assume that `value` won’t appear more than once in `array`
     - If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
     - Print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)
* **2-O**:
The `time complexity` (worst case) of a linear search in an array of size `n`
* **3-O**:
The `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`
* **4-O**:
The `time complexity` (worst case) of a binary search in an array of size `n`
* **5-O**:
The `space complexity` (worst case) of a binary search in an array of size `n`
* **6-O**:
The space complexity of this function / algorithm
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
