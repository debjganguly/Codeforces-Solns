# A. Watermelon

**Problem Link:** [Codeforces 4A - Watermelon](https://codeforces.com/problemset/problem/4/A)  
**Time Limit:** 1 second  
**Memory Limit:** 64 megabytes

---

## 📝 Problem Summary

Pete and Billy bought a watermelon and want to divide it between themselves. They’re obsessed with **even numbers** and want to split the watermelon such that:

- Both parts weigh an **even** number of kilos
- Both parts have **positive** weight (no 0 kg nonsense)

You’re given the total weight `w` of the watermelon. Determine whether they can split it as per their weird little obsession.

---

## 🧾 Input

- A single integer `w` (1 ≤ w ≤ 100) — the weight of the watermelon.

---

## 🎯 Output

- Print `YES` if the watermelon can be divided into **two positive even parts**.
- Print `NO` otherwise.

---

## 🧠 Example

**Input:**
8


**Output:**
YES


**Explanation:**  
They can divide the watermelon into `2` and `6` or `4` and `4`, both of which are valid because both parts are even and non-zero.

---

## 💡 Key Insight

- The only even number that **cannot** be split into two positive even numbers is **2**.
- So, the answer is `YES` if `w` is even and greater than 2.

---

## ✅ Solution Logic (TL;DR)

```cpp
if (w % 2 == 0 && w > 2)
    cout << "YES";
else
    cout << "NO";
