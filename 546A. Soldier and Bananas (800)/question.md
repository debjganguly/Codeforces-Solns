# 💰 Codeforces A. Soldier and Bananas  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-546A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/546/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Brute%20Force%20%7C%20Implementation%20%7C%20Math-yellow)

---

## 🧩 Problem Statement  

A soldier wants to buy **w bananas** in a shop.  
- The first banana costs **k dollars**, the second costs **2k dollars**, the third **3k dollars**, and so on (the i-th banana costs **i·k dollars**).  
- The soldier initially has **n dollars**.  

Determine **how many dollars the soldier needs to borrow** from his friend to buy all **w bananas**.  
If he already has enough money, the answer is **0**.

---

## 📥 Input  

- Three positive integers:  
  - **k** — cost of the first banana (1 ≤ k ≤ 1000)  
  - **n** — initial number of dollars the soldier has (0 ≤ n ≤ 10⁹)  
  - **w** — number of bananas he wants to buy (1 ≤ w ≤ 1000)

---

## 📤 Output  

- A single integer — the number of dollars the soldier must borrow.  
- If he has enough money, output **0**.

---

## 💬 Examples  

**Example 1**  
Input:
3 17 4
Output:
13

**Explanation:**  
The total cost is 3 + 6 + 9 + 12 = 30 dollars.  
The soldier has 17 dollars, so he must borrow 30 − 17 = 13 dollars.

---

**Example 2**  
Input:
5 100 5
Output:
0

**Explanation:**  
The total cost is 5 + 10 + 15 + 20 + 25 = 75 dollars.  
The soldier has 100 dollars, so no borrowing is needed.

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **k (first banana cost)** | 1 ≤ k ≤ 1000 |
| **n (initial dollars)** | 0 ≤ n ≤ 10⁹ |
| **w (number of bananas)** | 1 ≤ w ≤ 1000 |
| **Time Limit** | 1 second |
| **Memory Limit** | 256 MB |

---

## 🧠 Key Takeaway  

> This is a simple **arithmetic progression / math problem** —  
> calculate the total cost using the sum of the first w multiples of k, then compare it with the soldier’s money.  

---

### 🏷️ Tags  
`#implementation` `#math` `#bruteforce` `#beginner-friendly`  

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)
