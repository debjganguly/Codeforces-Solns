# 🎭 Codeforces Beta Round #1 - Problem A: Theatre Square

## 📝 Problem Description

In the capital city of Berland, there's a rectangular **Theatre Square** of dimensions **n × m** meters. The city plans to cover the square using **square granite flagstones** of size **a × a**.

🧱 You can't break flagstones.  
📐 You **can** let flagstones hang over the edges.  
📏 All flagstones must be **aligned** to the rectangle edges.

### ❓ Task

Given the dimensions `n`, `m` and `a`, compute the **minimum number of flagstones** needed to completely cover the square.

---

## 📥 Input Format

A single line containing **three integers**:
n m a

- `1 ≤ n, m, a ≤ 10^9`

---

## 📤 Output Format

Print **one integer** — the **minimum number of flagstones** required.

---

## 📌 Example

### Input

6 6 4

### Output

4

🧮 Explanation:
- You need **2 flagstones** along the width (6/4 rounded up = 2)
- You need **2 flagstones** along the height (6/4 rounded up = 2)
- Total = 2 × 2 = **4**