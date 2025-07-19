
# Beautiful Matrix – Codeforces Problem A (Round 161 Div. 2)

## Problem Statement
You are given a 5 × 5 matrix consisting of 24 zeros and a single number one.

The matrix rows are indexed from 1 to 5 (top to bottom), and columns are indexed from 1 to 5 (left to right).

In one move, you can:
1. Swap two neighboring rows (i and i+1).
2. Swap two neighboring columns (j and j+1).

A matrix is **beautiful** if the single `1` is located in the center cell (intersection of row 3 and column 3).

**Goal:** Find the **minimum number of moves** needed to make the matrix beautiful.

---

## Input
- 5 lines, each containing 5 integers.
- The matrix contains exactly 24 zeros and one `1`.

---

## Output
- Print a single integer — the minimum number of moves required.

---

## Examples

### **Example 1**
**Input:**
```
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```
**Output:**
```
3
```

---

### **Example 2**
**Input:**
```
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
```
**Output:**
```
1
```

---

## Explanation
- To bring `1` to position (3, 3), count the vertical moves required to bring it to row 3 and the horizontal moves to bring it to column 3.
- The answer is the **Manhattan distance** from its current position `(i, j)` to `(3, 3)`:
  ```
  moves = |3 - i| + |3 - j|
  ```

---

## Solution Idea
1. Parse the 5×5 matrix.
2. Find the position `(i, j)` where `1` is located.
3. Compute `abs(3 - i) + abs(3 - j)` (since we use 1-based indexing).
4. Output the result.

---

## Sample Code (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i + 1;  // 1-based index
                y = j + 1;
            }
        }
    }
    cout << abs(3 - x) + abs(3 - y) << endl;
    return 0;
}
```

---

## Complexity
- **Time Complexity:** O(1) (We just scan a 5×5 matrix.)
- **Space Complexity:** O(1).

---

## Links
- [Codeforces Problem Link](https://codeforces.com/problemset/problem/263/A)

---
