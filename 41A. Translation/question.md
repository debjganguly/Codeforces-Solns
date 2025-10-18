# 🧩 Problem A - Translation

**Contest:** [Codeforces Beta Round 40 (Div. 2)](https://codeforces.com/contest/41)  
**Problem Link:** [A. Translation](https://codeforces.com/problemset/problem/41/A)  
**Tags:** `implementation`, `strings`, `*800`

---

## 📝 Problem Statement

The translation from the **Berland** language into the **Birland** language is not an easy task.  
Both languages are quite similar — a Berlandish word differs from a Birlandish word *only in that it’s written in reverse*.  

For example:  
- Berlandish: `code`  
- Birlandish: `edoc`  

Vasya translated a word `s` (in Berlandish) into a word `t` (in Birlandish).  
You must check whether his translation is **correct** — i.e., whether `t` is exactly the reverse of `s`.

---

## 💡 Input Format

- The first line contains the word `s` — the original word in Berlandish.  
- The second line contains the word `t` — Vasya’s translation in Birlandish.  
- Both words consist of lowercase English letters only.  
- Length of each word ≤ 100.

---

## ✅ Output Format

Print:  
- `"YES"` — if `t` is the reverse of `s`.  
- `"NO"` — otherwise.

---

## 🔍 Examples

**Input 1:**
code
edoc

**Output 1:**
YES

---

**Input 2:**
abb
aba

**Output 2:**
NO

---

**Input 3:**
code
code

**Output 3:**
NO

---

### 🧠 Idea
Reverse the string `s` and directly compare it with `t`.  
If they are identical → print `"YES"`, else → `"NO"`.

---