# A. Way Too Long Words

**Time Limit:** 1 second  
**Memory Limit:** 256 megabytes

## Problem Statement

Sometimes, some words like **"localization"** or **"internationalization"** are so long that writing them many times in a text is quite tiresome.

Let’s consider a word *too long* if its length is **strictly more than 10 characters**. All too long words should be replaced with a **special abbreviation**.

### Abbreviation Rule:
This abbreviation is made like this:
- Write the **first** letter of the word.
- Then, write the **number of characters between the first and last letter** (i.e., total length - 2).
- Finally, write the **last** letter of the word.

> That number is in **decimal** and must not contain any **leading zeroes**.

### Examples:
- `"localization"` → `"l10n"`
- `"internationalization"` → `"i18n"`

### Objective:
Automate the process of replacing too long words with their abbreviations. Words that are not too long should **remain unchanged**.

---

## Input

- The first line contains an integer `n` (1 ≤ n ≤ 100) — the number of words.
- The following `n` lines each contain one word.  
- All words consist of **lowercase Latin letters** and have lengths from **1 to 100** characters.

---

## Output

Print `n` lines.  
Each line should contain the **abbreviated or unchanged** version of the word from the corresponding input line.

---

## Example

### Input

4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

### Output

word
l10n
i18n
p43s

yaml
Copy code


---

## Notes

- `"word"` is only 4 letters, so it's printed unchanged.
- `"pneumonoultramicroscopicsilicovolcanoconiosis"` is 45 characters:
  - First letter: `'p'`
  - Last letter: `'s'`
  - Characters in between: `43`
  - Abbreviation: `"p43s"`
