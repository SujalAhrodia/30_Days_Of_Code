# 30_Days_Of_Code

## 30 Days of Code started on Novemer 12th 2018.
Will be solving one problem each on HackerRank and LeetCode

#### Day 0 
>1. A single line of text denoting (the variable whose contents must be printed).

>2. Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
#### Day 1
>1. Declare  variables: one of type int, one of type double, and one of type String.
    Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your variables. 
    Use the  operator to perform the following operations: 
    Print the sum of  plus your int variable on a new line.
    Print the sum of  plus your double variable to a scale of one decimal place on a new line.
    Concatenate  with the string you read as input and print the result on a new line.
    
>2. Given a 32-bit signed integer, reverse digits of an integer. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

>3. Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
### Day 2
>1. Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.
>Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

>2. Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.
### Day 3
>1. Given an integer, , perform the following conditional actions:
If  is odd, print Weird
If  is even and in the inclusive range of  to , print Not Weird
If  is even and in the inclusive range of  to , print Weird
If  is even and greater than , print Not Weird
>2. Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
### Day 4
>1. Write a Person class with an instance variable, , and a constructor that takes an integer, , as a parameter. The constructor must assign  to  after confirming the argument passed as  is not negative; if a negative argument is passed as , the constructor should set  to  and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:
yearPasses() should increase the  instance variable by .
amIOld() should perform the following conditional actions:
If , print You are young..
If  and , print You are a teenager..
Otherwise, print You are old..
To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite yet!

>2. Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.
### Day 5
>1. Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: n x i = result.
>2. Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
Example:
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
### Day 6
>1. Given a string of length N, print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).
Note:  is considered to be an even index.
>2. Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
### Day 7
>1. Given an array of  integers, print array's elements in reverse order as a single line of space-separated numbers.
>2. Given an array nums and a value val, remove all instances of that value in-place and return the new length. 
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory. The order of elements can be changed. It doesn't matter what you leave beyond the new length.
### Day 8
>1. Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for  is not found, print Not found instead.
Note: Your phone book should be a Dictionary/Map/HashMap data structure.
>2. Implement strStr().
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
### Day 9
>1. Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.
>2. Write a factorial function that takes a positive integer as a parameter and print its factorial.
### Day 10
>1. Given a base-10 integer, convert it to binary base-2. Then find and print the maximum number of consecutive 1's in the binary representation.
>2. Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence.
Note: Each term of the sequence of integers will be represented as a string.
### Day 11
>1. Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
>2. Calculate the hourglass sum for every hourglass in a 2D Array, then print the maximum hourglass sum.
### Day 12
>1. You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.
A Student class constructor, which has  parameters:
A string, firstName.
A string, lastName.
An integer, id.
An integer array (or vector) of test scores.
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average.
>2. Given a string s consists of upper/lower-case alphabets and empty space characters '  ', return the length of last word in the string.
If the last word does not exist, return 0.
### Day 13
>1. Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
    The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.
>2. Given a Book class and a Solution class, write a MyBook class that does the following: 
Inherits from Book: Has a parameterized constructor taking these  parameters: (i) string Title , (ii) string Author, (iii) int Price.
Implements the Book class' abstract display() method so it prints the value of above parameters.
### Day 14
>1. Complete the Difference class by writing the following:
A class constructor that takes an array of integers as a parameter and saves it to the 'elements' instance variable.
A computeDifference method that finds the maximum absolute difference between any 2 numbers in 'elements' and stores it in the  'maximumdifference' instance variable.
>2. Given two binary strings, return their sum (also a binary string).
The input strings are both non-empty and contains only characters 1 or 0.
### Day 15
>1. Complete the insert function in your editor so that it creates a new Node(data) and inserts it at the tail of the linked list referenced by the 'head' parameter. Once the new node is added, return the reference to the 'head' node.
>2. Implement int sqrt(int x).
Compute and return the square root of x, where x is guaranteed to be a non-negative integer.
Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.
### Day 16
>1. Read a string,'S', and print its integer value; if  cannot be converted to an integer, print 'Bad String'.
Note: You must use the String-to-Integer and exception handling constructs built into your submission language. If you attempt to use loops/conditional statements, you will get a '0'score.
>2. You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Note: Given n will be a positive integer
>3. You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
### Day 17
>1. Write a Calculator class with a single method: int power(int,int). The power method takes two integers 'n' and 'p', as parameters and returns the integer result of n^p. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.
Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
>2. Given a sorted linked list, delete all duplicates such that each element appear only once.
### Day 18
>1. Write the following declarations and implementations:
Two instance variables: one for your stack, and one for your queue.
A void pushCharacter(char ch) method that pushes a character onto a stack.
A void enqueueCharacter(char ch) method that enqueues a character in the queue.
A char popCharacter() method that pops and returns the character at the top of the stack.
A char dequeueCharacter() method that dequeues and returns the first character in the queue.
>2. Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
Note:
The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
### Day 19
>1. The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you in the editor below.
Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of 'n'.
>2. Given two binary trees, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical and the nodes have the same value.
### Day 20
>1. Given an array, of size 'n' distinct elements, sort the array in ascending order using the Bubble Sort algorithm. Print the total number of swaps, first and the last element of sorted array.
>2. Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
### Day 21
>1. Write a single generic function named printArray; this function must take an array of generic elements as a parameter (the exception to this is C++, which takes a vector). The locked Solution class in your editor tests your function.
Note: You must use generics to solve this challenge. Do not write overloaded functions.
>2. Given a binary tree, find its maximum depth. The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
Note: A leaf is a node with no children.
### Day 22
>1. The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer 'root', pointing to the root of a binary search tree. Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.
>2. Given a non-empty array of integers, every element appears twice except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
### Day 23
>1. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree. Hint: You'll find a queue helpful in completing this challenge.
>2. Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.
### Day 24
>1. A removeDuplicates function is declared in your editor, which takes a pointer to the  node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.
Note: The  pointer may be null, indicating that the list is empty. Be sure to reset your  pointer when performing deletions to avoid breaking the list.
>2. Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
### Day 25
>1. A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number, n, determine and print whether it's prime or not.
Note: If possible, try to come up with a O(sqrt(n)) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code!
>2. Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
### Day 26
>1. Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:
If the book is returned on or before the expected return date, no fine will be charged (i.e. fine=0).
If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, 15* no. of days.
If the book is returned after the expected return month but still within the same calendar year as the expected return date, then 500* no. of months .
If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000.
Input Format
>2. Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as: a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
### Day27
>1. Since the problem is not explained properly, please check it [here](https://www.hackerrank.com/challenges/30-testing/problem)
>2. Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
Note: A leaf is a node with no children.
### Day 28
>1. Consider a database table, Emails, which has the attributes First Name and Email ID. Given N rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.
>2. Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
Note: A leaf is a node with no children.
### Day29
>1. Given set S={1,2,3,...N}. Find two integers, A and B (where A<B), from set S such that the value of A&B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.
>2. Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
