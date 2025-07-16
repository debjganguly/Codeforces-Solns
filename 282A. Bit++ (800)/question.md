# 🚀 Codeforces Round #173 (Div. 2) - Problem A: Bit++

## 🧩 Problem Summary

In the fictional language **Bit++**, there is only one variable: `x`, initially set to `0`. You are given a program made up of **n statements**. Each statement either increments or decrements the variable:

- `++X` or `X++` → increment `x` by 1
- `--X` or `X--` → decrement `x` by 1

The goal is to **simulate the execution of all statements** and determine the final value of `x`.

---

## 📥 Input

- First line: integer `n` (1 ≤ n ≤ 150) — number of statements.
- Next `n` lines: each line contains one of the four valid statements.

### 📌 Examples

#### Example 1:

Input:
1
++X

Output:
1

#### Example 2:

Input:
2
X++
--X

Output:
0

---

## 📤 Output

- A single integer — the **final value of `x`** after all statements are executed.