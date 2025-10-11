# 🐘 Codeforces A. Elephant  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-617A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/617/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Math%20%7C%20Greedy-yellow)
![Language](https://img.shields.io/badge/Language-C++20-orange)

---

## 🧩 Problem Statement  

An **elephant** wants to visit his friend.  
His house is located at point **0**, and his friend’s house is at point **x (x > 0)** on a coordinate line.  

In one step, the elephant can move **1**, **2**, **3**, **4**, or **5** positions forward.  

Your task is to determine the **minimum number of steps** required for the elephant to reach his friend’s house.

---

## 📥 Input  

- A single integer **x** *(1 ≤ x ≤ 1,000,000)* — the coordinate of the friend’s house.  

---

## 📤 Output  

- Print a single integer — the **minimum number of steps** required to reach point **x**.  

---

## 🧠 Explanation  

The elephant always wants to take the **largest possible step (5 units)** each time to minimize the total number of moves.  
After taking as many full 5-length steps as possible, if a small remainder is left (1–4), he just takes one extra step to cover it.  

Simple math, quick logic 💡  

---

## 💬 Examples  

### ✅ Example 1
Input:
5

Output:
1

🧾 **Explanation:**  
The elephant can move 5 → 5 → 2, reaching 12 in 3 steps.  
Other combinations (like 4+4+4) also give 3 steps, but never fewer.

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **x (coordinate)** | 1 ≤ x ≤ 1,000,000 |
| **Time Limit** | 1 second |
| **Memory Limit** | 256 MB |

---

## 🧾 Summary  

| Feature | Description |
|----------|--------------|
| **Difficulty** | 🟢 Easy (800) |
| **Category** | Math, Greedy |
| **Platform** | Codeforces |
| **Contest** | Round #340 (Div. 2) |

---

## 🧠 Key Takeaway  

> Sometimes the simplest logic is the smartest one —  
> **Think big steps, move fast, and finish clean.** 🚀  

---

### 🏷️ Tags  
`#math` `#greedy` `#implementation` `#beginner-friendly`

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)

---
