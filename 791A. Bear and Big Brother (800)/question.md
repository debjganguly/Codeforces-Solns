
# Bear and Big Brother – Codeforces Problem A (Round #405 Div. 2)

## Problem Statement
Limak the bear wants to become larger than his brother Bob.  
Initially:
- Limak weighs **a**
- Bob weighs **b**  
(**1 ≤ a ≤ b ≤ 10**)

Each year:
- Limak's weight triples (**a = a * 3**)
- Bob's weight doubles (**b = b * 2**)

We need to determine the number of years required for Limak's weight to become **strictly greater than Bob's**.

---

## Input
- A single line containing two integers **a** and **b** (1 ≤ a ≤ b ≤ 10).

---

## Output
- Print a single integer: the number of years after which Limak becomes strictly heavier than Bob.

---

## Examples
### Example 1
**Input:**
```
4 7
```
**Output:**
```
2
```

### Example 2
**Input:**
```
4 9
```
**Output:**
```
3
```

### Example 3
**Input:**
```
1 1
```
**Output:**
```
1
```

---

## Approach
1. Read **a** and **b**.
2. Use a loop to simulate each year:
   - Multiply **a** by 3.
   - Multiply **b** by 2.
   - Count the years until **a > b**.
3. Print the count.

---

## Sample Solution (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years << endl;
    return 0;
}
```

---

## Complexity
- **Time Complexity:** O(log b) (since weights grow exponentially).
- **Space Complexity:** O(1).

---

## Links
- [Codeforces Problem Link](https://codeforces.com/problemset/problem/791/A)

---
