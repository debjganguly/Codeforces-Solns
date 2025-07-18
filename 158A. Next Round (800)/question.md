# A. Next Round

**Time Limit:** 3 seconds  
**Memory Limit:** 256 megabytes  

---

### **Problem Statement**
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of `n` participants took part in the contest (`n ≥ k`), and you already know their scores.  
Calculate how many participants will advance to the next round.

---

### **Input**
- The first line of input contains two integers `n` and `k`  
  `(1 ≤ k ≤ n ≤ 50)` separated by a single space.
- The second line contains `n` space-separated integers  
  `a₁, a₂, …, aₙ (0 ≤ aᵢ ≤ 100)`,  
  where `aᵢ` is the score earned by the participant who got the i-th place.  
- The given sequence is **non-increasing** (for all `i` from `1` to `n−1`, `aᵢ ≥ aᵢ₊₁`).

---

### **Output**
Output the number of participants who advance to the next round.

---

### **Examples**

#### **Input**
```
8 5
10 9 8 7 7 7 5 5
```

#### **Output**
```
6
```

---

#### **Input**
```
4 2
0 0 0 0
```

#### **Output**
```
0
```

---

### **Explanation**
- In the first example, the participant on the 5th place earned **7 points**.  
  As the participant on the 6th place also earned **7 points**, there are **6 advancers**.
- In the second example, nobody got a positive score, so **0 advancers**.

---

### **Constraints**
- `1 ≤ k ≤ n ≤ 50`
- `0 ≤ aᵢ ≤ 100`

---

### **Solution Idea**
- Find the score at the `k`-th position (1-based index).
- Count how many participants have a score **≥ that score** and **> 0**.

---
