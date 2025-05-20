# 🚦 DFA Construction 

This project demonstrates the construction and simulation of a **Deterministic Finite Automaton (DFA)** to recognise strings that match a specific regular expression. The implementation is done in **C++**.

---

## 📘 Definition

A **Deterministic Finite Automaton (DFA)** is a theoretical model of computation used to determine whether a given string belongs to a particular regular language. A DFA consists of:

- A finite set of **states**
- An **input alphabet**
- A **transition function**
- A **start state**
- A set of **accepting (final) states**

In this experiment, the DFA is constructed to accept the language defined by the **regular expression**:
```yaml
(a|b)*abb+
```

This expression denotes all strings over `{a, b}` that end in one or more `b`s and are preceded by the substring `"ab"`.

---

## 🔁 Logic & DFA Core

The DFA transitions are modelled using a 2D vector `re` where each row represents a state, and the columns represent the transition on `'a'` and `'b'` respectively.

### DFA Transition Table

| State | On 'a' | On 'b' |
|-------|--------|--------|
|  0    |   1    |   0    |
|  1    |   1    |   2    |
|  2    |   1    |   3    |
|  3    |   1    |   3    |

- **Start State**: 0  
- **Final State**: 3  
- **Accepted Language**: All strings containing a substring ending in `"abb"` followed by one or more `b`s.

---

## 🧪 Sample Input/Output

Example 1
```yaml
Input: aabb

Output: Accepted
```

Example 2
```yaml
Input: abababbb

Output: Accepted
```

Example 3
```yaml
Input: aba

Output: Rejected
```

---

## 🌍 Real-World Applications

- Lexical Analysis: Tokenising source code in compilers.
- Network Security: Pattern matching in intrusion detection systems.
- Text Editors: Implementing search and syntax highlighting.
- Natural Language Processing: Recognising grammars in structured text.
- Embedded Systems: Modelling finite state behaviour in devices.

---
