
# Word Capitalization – Codeforces Problem A (Round #172 Div. 2)

## Problem Statement
Capitalization means writing a word with its first letter as a **capital (uppercase)** letter.  
Your task is to **capitalize the first letter** of the given word while keeping all other letters unchanged.

---

## Input
- A single non-empty word (string).
- The word consists of **lowercase and uppercase English letters**.
- The length of the word will not exceed **1000 characters**.

---

## Output
- Print the given word after capitalizing its **first letter**.

---

## Examples
### Example 1
**Input:**
```
ApPLe
```
**Output:**
```
ApPLe
```

### Example 2
**Input:**
```
konjac
```
**Output:**
```
Konjac
```

---

## Approach
1. Convert the first character of the string to uppercase.
2. Leave all other characters unchanged.
3. Print the resulting string.

---

## Sample Solution (C++)
```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;

    // Capitalize the first letter
    word[0] = toupper(word[0]);

    cout << word << endl;
    return 0;
}
```

---

## Complexity
- **Time Complexity:** O(1) (only modifying one character).
- **Space Complexity:** O(1) (in-place modification).

---

## Links
- [Codeforces Problem Link](https://codeforces.com/problemset/problem/281/A)

---
