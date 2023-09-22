## **Sorting Algorithms & Big O**
**`C`** **`Algorithm`** **`Data structure`**

### **0.Bubble sort**
#### ***Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm***
- Prototype: `void bubble_sort(int *array, size_t size);`
- You’re expected to print the array after each time you swap two elements (See example below)
#### ***Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:***
- in the best case
- in the average case
- in the worst case
#### ***0-bubble_sort Algorithm***
1. Check for special cases:- If `array` is NULL or `size` is 0, return immediately.
2. Initialize variables:- `i`, `j`, `size_i`, `temp`, and `flag` are declared for later use.
3. Calculate `size_i`:- Set `size_i` to `size - 1`.
4. Start the outer loop:- Loop through the array using `i` from 0 to `size - 1`.
5. Initialize `flag` and start the inner loop:- Set `flag` to 0 at the beginning of each pass and loop through the array using `j` from 0 to `size_i`.
6. Compare adjacent elements and swap if necessary:- If `array[j] > array[j + 1]`, swap them and print the array.
7. Check for sorted array:- If `flag` remains 0 after the inner loop, return early as the array is sorted.
8. Decrement `size_i`:- After each pass, decrement `size_i` by 1 to consider a shorter unsorted portion.
9. Repeat the outer loop until sorted:- Continue the outer loop until `i` reaches `size - 1`.
10. Return:- The function exits when the array is fully sorted or when a sorted portion is detected.
