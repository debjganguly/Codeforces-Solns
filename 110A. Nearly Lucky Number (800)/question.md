# 🍀 Codeforces A. Nearly Lucky Number  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-110A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/110/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Implementation%20%7C%20Math-yellow)

---

## 🧩 Problem Statement  

Petya loves **lucky numbers** — numbers that contain only the digits **4** and **7**.  
For example, **4**, **47**, and **744** are lucky numbers, while **5**, **17**, and **467** are not.  

However, Petya also defines a **nearly lucky number**:  
> A number is **nearly lucky** if the **count of lucky digits** in it is **itself a lucky number**.  

Given an integer **n**, determine whether it is a **nearly lucky number**.

---

## 📥 Input  

- A single integer **n** (1 ≤ n ≤ 10¹⁸)  

⚠️ Note:  
Use standard input/output methods compatible with 64-bit integers —  
for example, `cin`/`cout` in C++ or `long` in Java.

---

## 📤 Output  

- Print `"YES"` if the number **n** is nearly lucky.  
- Otherwise, print `"NO"`.  

(Do **not** include quotes in the output.)

---

## 💬 Examples  

**Example 1**  
Input:  
40047

Output:  
NO

**Explanation:**  
The number **40047** has **3** lucky digits (4, 0, 0, 4, 7 → three of them are 4 or 7).  
Since **3** is **not** a lucky number, the result is `"NO"`.

---

**Example 2**  
Input:  
7747774

Output:  
YES

**Explanation:**  
There are **7** lucky digits.  
Since **7** itself is a lucky number, the result is `"YES"`.

---

**Example 3**  
Input:  
1000000000000000000

Output:  
NO

**Explanation:**  
There are **0** lucky digits, and **0** is not a lucky number.

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **n (input number)** | 1 ≤ n ≤ 10¹⁸ |
| **Time Limit** | 2 seconds *(doubled due to updated judging server)* |
| **Memory Limit** | 256 MB |

---

## 🧠 Key Takeaway  

> This problem combines **digit analysis** with a simple **logical condition**.  
> You must count the lucky digits (4 or 7) in the number,  
> and then check whether that count forms a lucky number itself.  

It’s a classic beginner-friendly **implementation problem** with a neat mathematical twist.

---

### 🏷️ Tags  
`#implementation` `#math` `#digits` `#beginner-friendly`

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)