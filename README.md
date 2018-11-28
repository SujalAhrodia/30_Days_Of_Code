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
