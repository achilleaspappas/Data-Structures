# Data Structures
The purpose of this project is to write basic programs which cover a variety of data structure topic using C. This project was part of a course I did in my 3rd semester.

## Prerequisites
To use the files in this repository, you will need the following:
- [GCC](https://gcc.gnu.org/) in order to run the files.

## Getting Started
To get started with this project, follow these steps:
1. Clone this repository to your local machine.
2. Navigate to the directory containing the program.
3. Compile the program.
    ```
    gcc file.c -o file
    ```
4. Run the program.
    ```
    ./file
    ```

## Contents
This repository contains the following files:
1. 1.1-Code.c
2. 1.2-Code.c
3. 1.3-Code.c
4. 1.4-Code.c
5. 1.5-Code.c
6. 2.2-Code.c
7. 2.3-Code.c
8. 3.1-Code.c
9. 3.2-Code.c
10. 3.3-Code.c

## Specifications

### Functionality

### Task 1
1. Create a void function that accepts as parameters an array containing the prices of goods in a store and the number of goods and returns, via parameters, the minimum price, the maximum and the average of the prices. Write a program that reads the prices of up to 100 commodities and stores them in a table. If the user enters the value -1 , the entry of values should terminate. Program to display the minimum, maximum and average values using the function.
Hint: Since the return type of the function is void add pointer parameters to return the return values.

2. Create a function that accepts two alphanumerics as parameters and returns 1 if the second alphanumeric is contained at the end of the first. Otherwise, return 0 . 
Write a program that reads two alphanumeric characters up to 100 characters and, using the function, displays a message about whether the second alphanumeric character is contained at the end of the first one or not.

3. Write a program that reads the populations of 100 cities and stores them as they are entered into a table in ascending order. The program should display the sorted array before exiting.
For example, if the user has entered the value 2000 and then enters the value 1000 , the array elements should become 1000 , 2000 , and if the user then enters the value 1500 , they should become 1000 , 1500 , and 2000 .

4. Create a function that accepts as a parameter an array of integers and returns the occurrences of the number contained most times. E.g. for the array { 1 , 10 , -3 , 5 , -3 , 8 } the function should return the value 2 , 
because the number -3 appears most of the time. Write a program that reads 10 integers, stores them in an array and displays the maximum number of occurrences using the function .

5. Create a function that accepts an array as a parameter and checks if it contains repeating values. If so, the function should return a pointer to the most-repeated element, otherwise return NULL . 
Write a program that reads 100 integers, stores them in an array, calls the function, and uses its return value to display the value of the most frequently occurring element. 
(Note . If there are more than one elements with the same number of maximum appearances, the program should display the first of them).

### Task 2

1. As an example of running the algorithm, consider the values of the array elements to be: 10, 9, 4, 7, 6 . 
Describe the execution steps of the for iterations in bubble_sort() and the contents of array a after each iteration of the outer for .

2. Write a program that reads the names of 10 students (up to 100 characters each), stores them in a two-dimensional array, and uses the bubble algorithm to sort and display them in ascending alphabetical order. 
Hint: The prototype of bubble_sort() is:
    ```
    void bubble _ sort ( char str [][100]);
    ```

3. Essentially, this exercise is a combination of the previous exercises. Write a program that reads the names of 10 courses (up to 100 characters each) and stores them in a two-dimensional array. 
Also read the grades of 50 students in each of them and store the average for each course in a second table with type double . The program should display the names of the courses and next to each course the average score of the students in it, 
starting with the course with the highest average. In case of a tie, the courses should appear in alphabetical order. To sort the tables use the bubble algorithm.  Hint: The prototype of bubble_sort() is:
    ```
    void bubble _ sort ( char str [][100], double arr []);
    ```
bubble_sort () to sort the array arr and at the same time adjust the array st r , i.e., parallel permutation of degrees and the corresponding names.

### Task 3

1. Write a program that uses a pointer variable to read three integers and display the largest of them. Do not use another variable.

2. Complete the following program using the ptr pointer to read and display the data of a book. Do not use another variable. Hint: To access the fields of the structure use the operator -> .

3. Create a function that accepts an array as a parameter and checks if it contains repeating values. If so, the function should return a pointer to the most-repeated element, otherwise return NULL .
Write a program that reads 100 integers, stores them in an array, calls the function, and uses its return value to display the value of the most frequently occurring element. 
(Note . If there are more than one elements with the same number of maximum appearances, the program should display the first of them).

## Contributing

This is a university project so you can not contribute.

## Authors

* **[University of West Attica]** - *Provided the exersice*
* **[Achilleas Pappas]** - *Wrote the code*

## License

This project is licensed by University of West Attica as is a part of a university course. Do not redistribute.

## Acknowledgments

Thank you to **University of West Attica** and my professors for providing the resources and knowledge to complete this project.
