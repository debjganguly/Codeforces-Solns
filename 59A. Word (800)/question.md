# 🔤 Codeforces A. Word  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-59A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/59/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Implementation%20%7C%20Strings-yellow)

---

## 🧩 Problem Statement  

Vasya noticed that many people mix **uppercase** and **lowercase letters** in a single word.  
He decided to create a browser extension that **changes the case of letters in a word** to be consistent: either all lowercase or all uppercase, depending on which requires fewer changes.  

Rules:  
1. If a word contains **more uppercase letters**, convert the word to **all uppercase**.  
2. Otherwise, convert it to **all lowercase**.  
3. If the number of uppercase and lowercase letters is **equal**, convert to **all lowercase**.

---

## 📥 Input  

- A single word **s** (length 1–100), consisting only of uppercase and lowercase Latin letters.

---

## 📤 Output  

- Print the corrected word according to Vasya’s rules.

---

## 💬 Examples  

**Example 1**  
Input:
HoUse
Output:
house

**Explanation:** More lowercase letters → convert entire word to lowercase.

**Example 2**  
Input:
ViP
Output:
VIP

**Explanation:** More uppercase letters → convert entire word to uppercase.

**Example 3**  
Input:
maTRIx
Output:
matrix

**Explanation:** Equal number of uppercase and lowercase letters → convert entire word to lowercase.

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **Length of word** | 1 ≤ abs(s) ≤ 100 |
| **Time Limit** | 2 seconds |
| **Memory Limit** | 256 MB |

---

## 🧠 Key Takeaway  

> A **classic string and implementation problem** — count uppercase and lowercase letters, then apply a consistent case to minimize changes.

---

### 🏷️ Tags  
`#implementation` `#strings` `#beginner-friendly`  

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)
