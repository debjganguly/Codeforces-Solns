# 🧮 Codeforces A. Wrong Subtraction  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-479A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/479/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Implementation-yellow)

---

## 🧩 Problem Statement  

Little girl **Tanya** is learning how to subtract numbers — but she has her own *unique* way of doing it.  
She performs subtraction according to these rules:  

- If the **last digit** of the number is **non-zero**, she **subtracts 1**.  
- If the **last digit** is **zero**, she **divides the number by 10** (i.e., removes the last digit).  

You are given an integer **n** and a number **k** — the number of times Tanya performs her subtraction.  
Your task is to find the **final number** after all **k** operations.  

It is guaranteed that the result will always be a **positive integer**.  

---

## 📥 Input  

- Two integers:  
  - **n** — the starting number (2 ≤ n ≤ 10⁹)  
  - **k** — the number of operations (1 ≤ k ≤ 50)  

---

## 📤 Output  

- Print a single integer — the resulting number after performing the operation **k** times.  

---

## 💬 Examples  

**Example 1**  
Input:
512 4

Output:  
50


**Explanation:**  
The number changes as follows:  
512 → 511 → 510 → 51 → 50


---

**Example 2**  
Input:  
1000000000 9

Output:  
1


---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **n (initial number)** | 2 ≤ n ≤ 10⁹ |
| **k (number of operations)** | 1 ≤ k ≤ 50 |
| **Time Limit** | 1 second |
| **Memory Limit** | 256 MB |

---

## 🧠 Key Takeaway  

> A straightforward **implementation** problem that tests your ability to simulate operations step by step.  
> Watch the **last digit** carefully — Tanya’s subtraction depends entirely on it!

---

### 🏷️ Tags  
`#implementation` `#simulation` `#beginner-friendly`

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)