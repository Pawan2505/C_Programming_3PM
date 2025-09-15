# ✍️ Variables in C

---

## 1️⃣ What is a Variable?

* A **container** in memory to store data.
* Like a **box with a name** → we can put value inside it.
* Value can be **changed (re-initialized)** during program execution.

👉 Example:

```c
int age = 20;   // age is a variable
```

---

## 2️⃣ Rules for Naming Variables

Allowed:

* Must **start with a letter or underscore**.
* Can contain letters, digits, and underscore (`_`).
* Case-sensitive → `Age` and `age` are different.

Not allowed:

* No keywords (e.g., `int`, `float`, `return`).
* No spaces or special symbols (`@`, `#`, `-`, etc.).

👉 Valid names: `age`, `rollNo`, `_marks`, `total1`.
👉 Invalid names: `1age`, `total%`, `float`.

---

## 3️⃣ Declaration & Initialization

* **Declaration** → telling compiler about variable.

```c
int marks;
```

* **Initialization** → giving initial value.

```c
int marks = 90;
```

* **Re-initialization** → updating value later.

```c
marks = 95;   // old value replaced
```

---

## 4️⃣ Types of Variables (Scope)

### 🔹 Local Variable

* Declared inside function/block.
* Accessible only inside that function.

```c
void main() {
    int x = 10;   // local variable
    printf("%d", x);
}
```

### 🔹 Global Variable

* Declared outside all functions.
* Accessible from any function in program.

```c
int x = 100;   // global variable
void main() {
    printf("%d", x);
}
```

### 🔹 Static Variable

* Retains value **between function calls**.

```c
void demo() {
    static int count = 0;
    count++;
    printf("%d", count);
}
```

### 🔹 Automatic Variable (default)

* Declared inside function without `static`.
* Created when function is called, destroyed after function ends.

### 🔹 Extern Variable

* Declared with `extern` keyword.
* Tells compiler variable exists in another file/function.

---

## 5️⃣ Example Program

```c
#include <stdio.h>

int global = 50;   // global variable

int main() {
    int local = 10;          // local variable
    static int counter = 0;  // static variable
    
    printf("Local = %d\n", local);
    printf("Global = %d\n", global);
    printf("Counter = %d\n", counter);
    
    return 0;
}
```

---

## 6️⃣ Key Notes

* **Local > Global** → if both have same name, local is preferred.
* **Static** variables → keep their old value.
* **Extern** is useful in multi-file programs.

---
