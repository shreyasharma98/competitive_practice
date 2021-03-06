## Competitive_practice

This is a practice repo consist of some intresting competitive coding practice.<br>
### 1. Print swastic pattern : swastik.cpp
```
Input : row = 7, column = 7        
Output:

  *     * * * *
  *     *
  *     *
  * * * * * * *
        *     *
        *     *
  * * * *     *
  ```
### 2. Print the no. of trailing zeros in the factorial of a number : tail_zeros_in_facorial.cpp
```
Input : 20
output: 4 
explaination : 20! = 20*19*18.....*2*1 = 2432902008176640000

Input : 5
output: 1
explaination : 5*4*3*2*1 = 120
```
### 3. Find second largest element in an given array of integers : second_large.cpp

```
Original array: 7 12 9 15 19 32 56 70 
The second largest element is: 56
```
### 4. To find the prime in the given range : prime_sieve.cpp
The naive approach will be : 
```
//Naive Approach 
bool isPrime(int n) {
	if (n == 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
```
Complexity : O(sqrtN)<br>
The best method is : prime sieve : https://github.com/shreyasharma98/competitive_practice/blob/master/prime_sieve.cpp
reference : https://www.youtube.com/watch?v=yB57bcffJo4&list=PLl4Y2XuUavmuFLS-RJCGUYiJNMw2wQYKX&index=6

### 5. pattern problem : complex_sqare.cpp
```
Input : n = 5        
Output:

 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
  ```
### 6.PowerPuff Girls
An artist require n ingredients to make 1 PowerPuff Girl.The quantity each n ingredients required to 1 such doll also given in the 2nd line of the input.The quantity of each ingredient present in the shop is given in the 3rd line.
Find the maximum number of dolls which can be made out of the present Ingredients.
```
Sample Input
4
2 5 6 3
20 40 90 50

Sample Output
8
```
