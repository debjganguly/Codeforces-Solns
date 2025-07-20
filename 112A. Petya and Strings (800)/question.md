
# Petya and Strings – Codeforces Problem A (Beta Round 85 Div. 2)

## Problem Statement
Little Petya loves presents. His mum bought him two strings of the same size for his birthday.  
The strings consist of uppercase and lowercase Latin letters.

Now Petya wants to compare those two strings **lexicographically**.  
**The letters' case does not matter**, that is an uppercase letter is considered equivalent to the corresponding lowercase letter.

Your task is to help Petya perform the comparison.

---

## Input
- Each of the first two lines contains a string.
- Both strings have the same length (1 ≤ length ≤ 100).
- Each string consists of uppercase and lowercase Latin letters.

---

## Output
- Print `-1` if the first string is less than the second string.
- Print `1` if the second string is less than the first string.
- Print `0` if the strings are equal (ignoring case).

---

## Examples

### Example 1
**Input:**
```
aaaa
aaaA
```
**Output:**
```
0
```

### Example 2
**Input:**
```
abs
Abz
```
**Output:**
```
-1
```

### Example 3
**Input:**
```
abcdefg
AbCdEfF
```
**Output:**
```
1
```

---

## Explanation
Lexicographical order is similar to dictionary order.  
To compare strings ignoring case:
1. Convert both strings to lowercase (or uppercase).
2. Compare character by character.
3. Determine which string is "smaller" or "greater".

---

## Solution Idea
1. Read both strings.
2. Convert both to lowercase.
3. Compare them using standard string comparison.

---

## Complexity
- **Time Complexity:** O(n), where n is the string length.
- **Space Complexity:** O(1), since operations are done in place.

---

## Links
- [Codeforces Problem Link](https://codeforces.com/problemset/problem/112/A)
- [Lexicographical Order (Wikipedia)](http://en.wikipedia.org/wiki/Lexicographical_order)

---
