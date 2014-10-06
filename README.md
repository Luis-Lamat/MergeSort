MergeSort
=========

A merge sort algorithm that outputs the number of comparisons for better understanding.
The program solves the following problem:

Problem Description
===================

The following problem has to analyze a particular type of sorting algorithm. This algorithm processes a sequence of n distinct integers by exchanging adjacent elements until the sequence is sorted in ascending order. For the following input data:

    9 1 0 5 4

Produce the next output after the sorting:

    0 1 4 5 9

Your task is say the number of adjacent exchanging operations are requiered to sort the input in ascending order.
The order of the algorithm should be of O(nlog2n).



Input
========

There are several cases, for each case comes the size of the case (n <= 5*10^5). Each next n lines comes with a positive integer (d <= 10^9). The input ends with a size of 0.


Output
========

For each case, display a line with the minimun number of of adjacent exchanging operations of the input.


Sample Input
=============

5
9 1 0 5 4

3
1 2 3

0

Sample Output
===============

6
0
