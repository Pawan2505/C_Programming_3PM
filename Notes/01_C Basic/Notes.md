# ✍️ C Programming Notes

---

## 1️⃣ Comments in C

* **`//`** → single line comment (documentation).
* **`/*  ...  */`** → multi-line comment.

👉 Used to explain code → ignored by compiler.

---

## 2️⃣ Preprocessor & Header Files

* `#` → Preprocessor symbol.
* `#include` → directive to include a file.
* `stdio` → standard input-output library.
* `.h` → header file extension.

Example:

```c
#include <stdio.h>
```

---

## 3️⃣ `main()` Function

* **int** → return type (must return an integer).
* **main** → name of the function.
* **main()** → entry point of program (execution starts here).
* `{ }` → function body (start & end).
* `return 0;` → returns integer to OS (successful execution).
* **Who calls `main()`?** → Operating System (OS).

---

## 4️⃣ First Program

```c
#include <stdio.h>
int main() {
    printf("Hello Bhailog..");  
    return 0;   // optional but good practice
}
```

---

## 5️⃣ Escape Sequences

* `\n` → new line.
  Example:

```c
printf("\nFirst Line");
printf("\nSecond Line");
```

---

## 6️⃣ Data Types in C

| Data Type | Example                  | Size    |
| --------- | ------------------------ | ------- |
| int       | 1,2,3,100                | 4 bytes |
| float     | 1.5,2.5                  | 4 bytes |
| double    | 1.56789                  | 8 bytes |
| char      | 'a','b'                  | 1 byte  |
| string    | "Hello" (array of chars) | depends |
| void      | no value                 | 0       |
| signed    | positive + negative      | varies  |
| unsigned  | only positive            | varies  |

---

## 7️⃣ Variables

* **Definition**: Container to store data.
* **Declaration**: `datatype variable_name;`
* **Initialization**: `int age = 20;`
* **Re-initialization**: value can be updated.
* Redeclaration not allowed.

---

## 8️⃣ Format Specifiers

| Specifier | Meaning |
| --------- | ------- |
| %d        | int     |
| %f        | float   |
| %lf       | double  |
| %c        | char    |
| %s        | string  |

---

## 9️⃣ Example with Variables

```c
int age = 200;
printf("Age is : %d", age);

age = 500;  // re-initialization
printf("New age : %d", age);
```

---

## 🔟 More Data Type Examples

```c
long int phone = 5678464;
char ch = 'a'; 
char str[] = "Pawan Maurya";
float pi = 3.14;
double price = 123543432.2453456;
```

👉 Notes:

* `'a'` → char (single character).
* `"a"` → string (array of chars).
* `%ld` → format specifier for `long int`.

---

## 1️⃣1️⃣ `sizeof` Operator

Used to check size of datatype/variable in bytes.

```c
printf("Size of int : %zu\n", sizeof(int));
printf("Size of float : %zu\n", sizeof(float));
printf("Size of double : %zu\n", sizeof(double));
printf("Size of char : %zu\n", sizeof(char));
```

---

## 1️⃣2️⃣ Constants in C

### ➤ Literal Constants

* Fixed values directly used in program.
* Example: `42`, `3.14`, `'A'`, `"Hello"`.

### ➤ Symbolic Constants

1. **Using const**

```c
const int num = 10;   // must be initialized
```

👉 Local constant, memory allocated.
👉 Cannot be changed after initialization.

2. **Using #define (macro)**

```c
#define PI 3.14
#define NAME "Pawan"
```

👉 Global constant.
👉 No memory allocation → replaced during compilation.

---

## 1️⃣3️⃣ Constant Examples

```c
const int num = 100;
// num = 200; // not allowed
printf("Num is : %d", num);
```

```c
#define PI 3.14
printf("Value of PI : %.2f", PI);
```

---

## 1️⃣4️⃣ Compare `const` vs `#define`

| Feature       | const        | #define     |
| ------------- | ------------ | ----------- |
| Scope         | local/global | global only |
| Memory        | allocated    | no memory   |
| Type checking | yes          | no          |
| Change value  | not allowed  | not allowed |

---


