# 0x1B. C - Sorting algorithms & Big O

## Resources:books:
Read or watch:
* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://en.wikipedia.org/wiki/Hash_table)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)
* [The best sorting algorithms resource ](https://www.toptal.com/developers/sorting-algorithms)
* [Stability in Algorithms](https://stackoverflow.com/questions/1517793/what-is-stability-in-sorting-algorithms-and-why-is-it-important)
* [Stability in Algorithms](https://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
* [Introduction to Big O Notation and Time Complexity](https://www.youtube.com/watch?time_continue=6&v=D6xkbGLQesk&feature=emb_logo)
* [8 classical sorting algorithms](https://medium.com/@bill.shantang/8-classical-sorting-algorithms-d048eec3fdab)
* [Sorting algorithm cheat sheet](https://www.interviewcake.com/sorting-algorithm-cheat-sheet)
* [Big O complexities](https://www.bigocheatsheet.com)
* [Big O Notation](https://www.youtube.com/watch?time_continue=6&v=D6xkbGLQesk&feature=emb_logo)
* [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort)
* [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort)
* [When to use Insertion sort](https://stackoverflow.com/questions/736920/is-there-ever-a-good-reason-to-use-insertion-sort)
* [Selection sort](https://en.wikipedia.org/wiki/Selection_sort)
* [Quick sort](https://en.wikipedia.org/wiki/Quicksort)
* [Quick sort](https://www.youtube.com/watch?v=COk73cpQbFQ)
* [Shell Sort](https://www.tutorialspoint.com/data_structures_algorithms/shell_sort_algorithm.htm)
* [Cocktail shaker sort](https://en.wikipedia.org/wiki/Cocktail_shaker_sort)
* [Cocktail sort](https://www.sanfoundry.com/c-program-implement-cocktail-sort/)
* [Counting sort]()
* [Merge sort](https://en.wikipedia.org/wiki/Merge_sort)
* [Merge sort - C like implementation](https://www.geeksforgeeks.org/c-program-for-merge-sort/)
* [Merge sort video](https://www.youtube.com/watch?time_continue=253&v=XaqR3G_NVoo&feature=emb_logo)
* [Merge sort](https://medium.com/karuna-sehgal/a-simplified-explanation-of-merge-sort-77089fe03bb2)
* [Heap sort](https://www.raywenderlich.com/53-data-structures-and-algorithms-in-swift-heap-sort)
* [Which algorithm is the best and why](https://www.quora.com/Which-sorting-algorithm-is-best-and-why)

---
## General Information and contents

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm
---

#### [Sorting algorithms & Big O](https://intranet.hbtn.io/projects/248#task-1326)
For further information, click on the previous link.

## Prerequisites

For further installation is necessary to set this program on Ubuntu 14.04 LTS using Vagrant in VirtualBox.

You need to install this software
```
1. VirtualBox - Virtual Machine
2. Vagrant
3. Emacs
4. Vim/Vi
5. VSCode
6. Usage: monty file
```

## Environment

This project was constructed and tested in the previous set up and debugged with GCC version 4.8.4.


## Instalation.
Follow the following instructions to get a copy of the program and run in your local machine.

- Clone the following repository.
 > `https://github.com/samisosa20/sorting_algorithms.git`

- Compile it with GCC
 > `gcc -Wall -Werror -Wextra -pedantic *.c -g -o executable_name`

- Run the program
 > `./executable_name`

 - Run with debugger
 > `valgrind --leak-check=full --show-leak-kinds=all ./executable_name`


## Built with...

- Visual Studio Code - Coding and structuring.
- Clion - Debugging and testing outcomes.

---
### [0. Bubble sort](./0-bubble_sort.c)
* Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm


### [1. Insertion sort](./1-insertion_sort_list.c)
* Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm


### [2. Selection sort](./2-selection_sort.c)
* Write a function that sorts an array of integers in ascending order using the Selection sort algorithm


### [3. Quick sort](./3-quick_sort.c)
* Write a function that sorts an array of integers in ascending order using the Quick sort algorithm


### [4. Shell sort - Knuth Sequence](./100-shell_sort.c)
* Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence


### [5. Cocktail shaker sort](./101-cocktail_sort_list.c)
* Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm


### [6. Counting sort](./102-counting_sort.c)
* Write a function that sorts an array of integers in ascending order using the Counting sort algorithm


### [7. Merge sort](./103-merge_sort.c)
* Write a function that sorts an array of integers in ascending order using the Merge sort algorithm


### [8. Heap sort](./104-heap_sort.c)
* Write a function that sorts an array of integers in ascending order using the Heap sort algorithm


### [9. Radix sort](./105-radix_sort.c)
* Write a function that sorts an array of integers in ascending order using the Radix sort algorithm


### [10. Bitonic sort](./106-bitonic_sort.c)
* Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm


### [11. Quick Sort - Hoare Partition scheme](./107-quick_sort_hoare.c)
* Write a function that sorts an array of integers in ascending order using the Quick sort algorithm


### [12. Dealer](./1000-sort_deck.c)
* Write a function that sorts a deck of cards.
---

##  Authors

- [GitHub - Julian Franco Rua](https://github.com/julianfrancor)

- [GitHub - Sammy Guttman Londoño](https://github.com/samisosa20)