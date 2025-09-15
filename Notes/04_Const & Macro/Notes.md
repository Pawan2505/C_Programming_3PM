# ✍️ `const` and `#define` (Macro) in C

---

## 1️⃣ **What is a Constant?**

A **constant** is a fixed value that **cannot be changed** during program execution.

👉 Two ways to declare constants in C:

1. Using `const` keyword
2. Using `#define` (macro constant)

---

## 2️⃣ **Const Keyword**

🔹 Syntax:

```c
const datatype variable = value;
```

🔹 Key Points:

* Memory **allocated** (because it is a variable with fixed value).
* Must be **initialized at declaration**.
* **Local scope** (inside function).
* Value **cannot be changed** after initialization.

👉 Example:

```c
#include <stdio.h>
int main() {
    const int num = 10;
    // num = 20; //error: assignment of read-only variable
    printf("Const Num: %d", num);
    return 0;
}
```

**Const = local constant variable**

---

## 3️⃣ **Macro Constant (`#define`)**

🔹 Syntax:

```c
#define NAME value
```

🔹 Key Points:

* Declared using **preprocessor directive**.
* **No memory allocation** (compiler replaces NAME with value before compilation).
* **Global scope** (available everywhere).
* Does not require `;` at the end.
* By convention → written in **UPPERCASE**.

👉 Example:

```c
#include <stdio.h>
#define PI 3.14
#define NAME "Pawan"

int main() {
    printf("Value of PI: %.2f\n", PI);
    printf("Name: %s", NAME);
    return 0;
}
```

**Macro = global symbolic constant**

---

## 4️⃣ **Difference between `const` and `#define`**

| Feature        | `const`                | `#define` (macro)            |
| -------------- | ---------------------- | ---------------------------- |
| Storage        | Memory allocated       | No memory (text replacement) |
| Scope          | Local (block/function) | Global (entire file)         |
| Data type      | Has datatype           | No datatype (just text)      |
| Debugging      | Easier                 | Harder (substitution only)   |
| Initialization | Must at declaration    | Value assigned at define     |

---

## 5️⃣ **Quick Example**

```c
#include <stdio.h>
#define PI 3.14   // Macro constant

int main() {
    const int AGE = 21;  // Const constant
    
    printf("PI = %.2f\n", PI);
    printf("AGE = %d\n", AGE);
    
    return 0;
}
```

---

## 6️⃣ Summary

* `const` → local constant variable → **stored in memory**.
* `#define` → global symbolic constant → **no memory (just replacement)**.

---

