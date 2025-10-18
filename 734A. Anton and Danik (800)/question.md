# ♟️ Codeforces A. Anton and Danik  

[![Codeforces Problem](https://img.shields.io/badge/Codeforces-734A-blue?logo=codeforces&logoColor=white)](https://codeforces.com/contest/734/problem/A)
![Difficulty](https://img.shields.io/badge/Difficulty-800-brightgreen)
![Category](https://img.shields.io/badge/Category-Implementation%20%7C%20Strings-yellow)

---

## 🧩 Problem Statement  

Anton and Danik are close friends who both love playing chess.  
They played **n** games in total, and for each game, the result is known:  
- `'A'` means **Anton** won the game.  
- `'D'` means **Danik** won the game.  

Your task is to determine **who won more games overall**, or if it was a **tie**.

---

## 📥 Input  

- The first line contains an integer **n** — the number of games played (1 ≤ n ≤ 100 000).  
- The second line contains a string **s** of length **n**, consisting only of `'A'` and `'D'`:  
  - `'A'` → Anton won that game.  
  - `'D'` → Danik won that game.  

---

## 📤 Output  

- Print `"Anton"` if Anton won more games.  
- Print `"Danik"` if Danik won more games.  
- Print `"Friendship"` if both won an equal number of games.  

*(Do not include quotes in the output.)*

---

## 💬 Examples  

**Example 1**  
Input:  
6
ADAAAA

Output:  
Anton


**Example 2**  
Input:  
7
DDDAADA

Output:  
Danik

**Example 3**  
Input:  
6
DADADA

Output:  
Friendship

**Explanation:**  
- In the first case, Anton wins 5 times and Danik once → `"Anton"`.  
- In the second, Danik wins 4 times and Anton 3 → `"Danik"`.  
- In the third, both have 3 wins → `"Friendship"`.

---

## ⚙️ Constraints  

| Parameter | Limit |
|------------|--------|
| **n (number of games)** | 1 ≤ n ≤ 100 000 |
| **Characters allowed** | `'A'`, `'D'` |
| **Time Limit** | 1 second |
| **Memory Limit** | 256 MB |

---

## 🧠 Key Takeaway  

> A straightforward **string counting problem** — just count the occurrences of `'A'` and `'D'` and compare them.  
> Simple, clean, and great for getting comfortable with basic string processing.

---

### 🏷️ Tags  
`#implementation` `#strings` `#beginner-friendly`

---

### 🐾 Author  
**Debjyoti Ganguly (debjganguly)**  
⭐ [Codeforces Profile](https://codeforces.com/profile/debjganguly)