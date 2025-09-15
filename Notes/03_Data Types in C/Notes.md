# ✍️ Data Types in C

---

## 1️⃣ What is a Data Type?

* A **data type** tells the compiler:

  * **What kind of data** will be stored (int, float, char, etc.)
  * **How much memory** it needs
  * **Which operations** can be performed on it

👉 Example:

```c
int age = 20;    // integer type
float pi = 3.14; // floating point type
char grade = 'A';// character type
```

---

## 2️⃣ Types of Data Types

### 🔹 **A. Primary (Fundamental) Data Types**

| Data Type | Size (in bytes)\* | Format Specifier | Example                   |
| --------- | ----------------- | ---------------- | ------------------------- |
| `int`     | 4 (usually)       | `%d`             | `int a = 10;`             |
| `float`   | 4                 | `%f`             | `float pi = 3.14;`        |
| `double`  | 8                 | `%lf`            | `double price = 123.456;` |
| `char`    | 1                 | `%c`             | `char ch = 'A';`          |
| `void`    | 0 (no storage)    | —                | `void main()`             |

---

### 🔹 **B. Derived Data Types**

* Built from primary data types.
  Examples:
* **Array** → `int arr[5] = {1,2,3,4,5};`
* **Pointer** → `int *ptr;`
* **Structure** → `struct student { int roll; char name[20]; };`
* **Union**
* **Function**

---

### 🔹 **C. User-Defined Data Types**

* Defined by programmer using keywords:
* **typedef**
* **enum**
* **struct**

👉 Example:

```c
typedef unsigned int u_int;
u_int age = 25;   // same as unsigned int
```

---

### 🔹 **D. Qualifiers with Data Types**

* Modify range/size of data:

| Keyword    | Meaning                    |
| ---------- | -------------------------- |
| `short`    | Smaller size (2 bytes int) |
| `long`     | Bigger size (8 bytes int)  |
| `signed`   | Can store +ve and -ve      |
| `unsigned` | Only +ve values            |

👉 Example:

```c
short int a;      // 2 bytes
long int b;       // 8 bytes
unsigned int c;   // only positive
```

---

## 3️⃣ Example Program

```c
#include <stdio.h>
int main() {
    int age = 21;
    float pi = 3.14;
    double price = 1234.5678;
    char grade = 'A';
    
    printf("Age = %d\n", age);
    printf("Pi = %.2f\n", pi);
    printf("Price = %lf\n", price);
    printf("Grade = %c\n", grade);
    
    return 0;
}
```

---

## 4️⃣ Key Notes

* `sizeof()` operator → tells size of data type.
* Range of data type depends on **system architecture** (16-bit, 32-bit, 64-bit).
* `unsigned` doubles the **positive range** but removes negatives.

---
