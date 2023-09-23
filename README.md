## **Sorting Algorithms & Big O**
**`C`** **`Algorithm`** **`Data structure`**

#### ***Write in the file `0-nth`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:***
- in the best case
- in the average case
- in the worst case

### **0.Bubble sort**
#### ***Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm***
- Prototype: `void bubble_sort(int *array, size_t size);`
- You’re expected to print the array after each time you swap two elements (See example below)

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

#### ***Write a function that sorts a `doubly linked list` of integers in ascending order using the Insertion sort algorithm***

- Prototype: `void insertion_sort_list(listint_t **list);`
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements.

#### ***1-Insertion_sort Algorithm***

1. Input Validation:- Check if the input list (`list`) is empty (NULL). If it is, there's nothing to sort, so return early.

2. Initialization:- Initialize two pointers, `node1` and `node2`, to traverse the list.

3. Main Loop:- Start a loop that iterates through the list as long as there is a `node1->next`.

4. Comparison:- Compare the value (`n`) of the current node (`node1`) with the value of the next node (`node2`).

5. Insertion Condition:- If `node1` has a greater value than `node2`, it means `node2` should be inserted before `node1` to maintain sorted order.

6. Updating Pointers for Insertion:- Update the `prev` and `next` pointers of `node1`, `node2`, and their neighboring nodes to insert `node2` before `node1`.

8. Continue Iteration:- After each comparison and possible insertion, move `node1` to the next position in the list.

9. Completion:- Once the loop finishes, the list is sorted, and the function is done.
