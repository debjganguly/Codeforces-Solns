# 💎 Codeforces A. Stones on the Table  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-266A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/266/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Implementation-yellow)
![Language](https://img.shields.io/badge/Language-C++23-orange)

---

## 🧩 Problem Statement  

There are **n** stones on a table, arranged in a row.  
Each stone can be one of three colors — **Red (R)**, **Green (G)**, or **Blue (B)**.  

Your task is to determine the **minimum number of stones to remove** so that **no two neighboring stones have the same color**.

Two stones are considered *neighbors* if there are no stones between them.

---

## 📥 Input  

- The first line contains an integer **n** *(1 ≤ n ≤ 50)* — the number of stones on the table.  
- The second line contains a string **s** of length **n**, where  
  - `'R'` means the stone is **Red**  
  - `'G'` means **Green**  
  - `'B'` means **Blue**

---

## 📤 Output  

- Print a single integer — the **minimum number of stones** that must be removed so that no two adjacent stones have the same color.

---

## 🧠 Explanation  

To solve the problem, you simply check **each pair of neighboring stones**.  
Every time two consecutive stones have the same color, the second one needs to be removed.  

In short: count how many times `s[i] == s[i+1]`.  
That count is your answer. ✅  

---

## 💬 Examples  

### ✅ Example 1

Input:
3
RRG

Output:
1

🧾 **Explanation:**  
The first two stones are both **R**, so remove one of them.

---

### ✅ Example 2

Input:
5
RRRRR

Output:
4

🧾 **Explanation:**  
All stones are red — you’ll have to remove 4 of them to leave just one.

---

### ✅ Example 3

Input:
4
BRBG

Output:
0

🧾 **Explanation:**  
All stones are already arranged with different neighboring colors.  
No removals needed. 🎉  

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **n (number of stones)** | 1 ≤ n ≤ 50 |
| **Time Limit** | 2 seconds |
| **Memory Limit** | 256 MB |

---

## 🧾 Summary  

| Feature | Description |
|----------|--------------|
| **Difficulty** | 🟢 Easy (800) |
| **Category** | Implementation |
| **Platform** | Codeforces |
| **Contest** | Round #163 (Div. 2) |

---

## 🧠 Key Takeaway  

> Sometimes the trickiest problems are just a matter of **counting smartly** —  
> small input, simple logic, but a sharp eye for patterns. 👀  

---

### 🏷️ Tags  
`#implementation` `#strings` `#beginner-friendly`

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)

---
