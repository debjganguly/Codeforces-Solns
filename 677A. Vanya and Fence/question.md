# 🧩 Problem A - Vanya and Fence

**Contest:** [Codeforces Round 355 (Div. 2)](https://codeforces.com/contest/677)  
**Problem Link:** [A. Vanya and Fence](https://codeforces.com/problemset/problem/677/A)  
**Tags:** `implementation`, `*800`

---

## 📝 Problem Statement

Vanya and his friends are walking along a fence of height `h`.  
They don’t want the guard to notice them — so anyone taller than `h` must **bend down**.

- Each **normal (standing)** person occupies width `1`.  
- Each **bent** person occupies width `2`.  
- They want to walk side by side in a single row.

You must determine the **minimum total width** of the road so all friends can walk in a row **without being noticed**.

---

## 💡 Input Format

- The first line contains two integers:  
  - `n` — number of friends  
  - `h` — height of the fence  
- The second line contains `n` integers `a₁, a₂, ..., aₙ` — heights of the friends.  
- Constraints:  
1 ≤ n ≤ 1000
1 ≤ h ≤ 1000
1 ≤ aᵢ ≤ 2h

---

## ✅ Output Format

Print a single integer — the **minimum width of the road** so that all friends can walk safely in one line.

---

## 🔍 Examples

**Input 1:**
3 7
4 5 14

**Output 1:**
4

**Explanation:**  
Only the third person (height 14 > 7) needs to bend.  
Width = 1 + 1 + 2 = **4**

---

**Input 2:**
6 1
1 1 1 1 1 1

**Output 2:**
6

**Explanation:**  
All are short enough — width = 1 × 6 = **6**

---

**Input 3:**
6 5
7 6 8 9 10 5

**Output 3:**
11

**Explanation:**  
All except the last person must bend.  
Width = (2 × 5) + 1 = **11**

---

### 🧠 Idea
Iterate through each friend’s height:
- If the height ≤ `h`, add `1` to total width.  
- If the height > `h`, add `2`.  

Print the sum.