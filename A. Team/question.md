# A. Team

**Time Limit:** 2 seconds  
**Memory Limit:** 256 megabytes

## 🧠 Problem Statement

Petya, Vasya, and Tonya are best friends and teammates preparing for a programming contest.  
They've agreed to solve a problem **only if at least two of them are sure about the solution**.

You are given information about `n` problems, and for each problem, you’re told which of the three friends are confident in the solution.

Your task is to determine **how many problems** they will actually implement during the contest.

---

## 📥 Input

- The first line contains a single integer `n` (1 ≤ n ≤ 1000) — the number of problems.
- The next `n` lines each contain three integers, separated by spaces:
  - `1` if the corresponding friend is sure about the solution,
  - `0` otherwise.

  The three integers represent the opinions of:
  - Petya
  - Vasya
  - Tonya

---

## 📤 Output

Print a single integer — the number of problems the team will solve.

---

## ✅ Examples

### Input

3
1 1 0
1 1 1
1 0 0

### Output

2

### Input

2
1 0 0
0 1 1

### Output

1

---

## 💡 Explanation

In the **first sample**:
- 1st problem: Petya and Vasya are sure → ✅
- 2nd problem: All three are sure → ✅
- 3rd problem: Only Petya is sure → ❌

So, **2 problems** will be solved.

In the **second sample**:
- 1st problem: Only Petya is sure → ❌
- 2nd problem: Vasya and Tonya are sure → ✅

So, **1 problem** will be solved.