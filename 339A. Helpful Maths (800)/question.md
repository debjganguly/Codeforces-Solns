
# Helpful Maths – Codeforces Problem A (Round #197 Div. 2)

## Problem Statement
Xenia, the beginner mathematician, is learning the addition operation. The teacher has written down the sum of multiple numbers.  
The sum only contains the numbers `1`, `2`, and `3`.

Xenia can calculate the sum only if the summands are arranged in **non-decreasing order**.  
You are given a string representing this sum. Rearrange the summands and print the sum in a way that Xenia can calculate.

---

## Input
- The first line contains a **non-empty string `s`** — the sum Xenia needs to count.
- `s` contains no spaces, only digits (`1`, `2`, `3`) and `+` characters.
- `s` is at most **100 characters long**.

---

## Output
- Print the new sum where the numbers are in **non-decreasing order**.

---

## Examples
### Example 1
**Input:**
```
3+2+1
```
**Output:**
```
1+2+3
```

### Example 2
**Input:**
```
1+1+3+1+3
```
**Output:**
```
1+1+1+3+3
```

### Example 3
**Input:**
```
2
```
**Output:**
```
2
```

---

## Approach
1. Split the string using `+` as a separator to get all numbers.
2. Sort the numbers (as integers).
3. Join them back together using `+`.

---

## Sample Solution (C++)
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> nums;

    // Extract digits
    for (int i = 0; i < s.size(); i += 2) {
        nums.push_back(s[i] - '0');
    }

    // Sort numbers
    sort(nums.begin(), nums.end());

    // Print result
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << "+";
    }

    return 0;
}
```

---

## Complexity
- **Time Complexity:** O(n log n) due to sorting.
- **Space Complexity:** O(n) to store the numbers.

---

## Links
- [Codeforces Problem Link](https://codeforces.com/problemset/problem/339/A)

---
