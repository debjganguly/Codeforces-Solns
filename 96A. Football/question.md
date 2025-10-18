# ⚽ Codeforces A. Football  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-96A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/96/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-900-brightgreen)
![Category](https://img.shields.io/badge/Category-Implementation%20%7C%20Strings-yellow)

---

## 🧩 Problem Statement  

Petya loves football. While watching a match, he decided to record the positions of players as a string consisting of **0** and **1**:  
- `'0'` represents a player from one team.  
- `'1'` represents a player from the other team.  

A football situation is considered **dangerous** if **at least 7 players from the same team** are standing **one after another**.

Your task is to determine whether the given situation is **dangerous** or **not**.

---

## 📥 Input  

- A single non-empty string **s**, containing only characters `'0'` and `'1'`.  
- The length of the string does **not exceed 100**.  
- There is **at least one player from each team** present on the field.  

---

## 📤 Output  

- Print `"YES"` if the situation is dangerous.  
- Otherwise, print `"NO"`.  

*(Do not include quotation marks in the output.)*

---

## 💬 Examples  

**Example 1**  
Input:  
001001

Output:  
NO


**Example 2**  
Input:  
1000000001

Output:  
YES

**Explanation:**  
In the second example, there are **7 consecutive '0's**, so the situation is **dangerous**.

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **String length (|s|)** | 1 ≤ |s| ≤ 100 |
| **Characters allowed** | `'0'`, `'1'` |
| **Time Limit** | 2 seconds *(doubled due to upgraded judging servers)* |
| **Memory Limit** | 256 MB |

---

## 🧠 Key Takeaway  

> This is a simple **string pattern detection** problem.  
> You just need to check if the string contains **“0000000”** or **“1111111”** as a substring.  
> A great introduction to working with **basic string operations** in competitive programming.  

---

### 🏷️ Tags  
`#implementation` `#strings` `#beginner-friendly`

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)