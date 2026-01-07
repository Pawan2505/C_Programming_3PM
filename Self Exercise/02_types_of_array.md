## TYPES OF ARRAYS

### Introduction

Arrays are mainly classified based on the **number of dimensions** they use.
Each dimension represents a level of indexing required to access elements.

---

## 1. One-Dimensional Array (1D Array)

### Explanation

A one-dimensional array is the **simplest form of array**.
It stores elements in a **single row or linear form** and uses **one index** to access elements.

### Example

`int arr[5] = {10, 20, 30, 40, 50};`

### Accessing Elements

* `arr[0]` → 10
* `arr[1]` → 20
* `arr[4]` → 50

### Use Cases

* Storing student marks
* List of numbers
* Searching and sorting operations

---

## 2. Two-Dimensional Array (2D Array)

### Explanation

A two-dimensional array is used to store data in **rows and columns**.
It is also known as a **matrix form** and requires **two indices** to access elements.

### Example

`int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};`

### Accessing Elements

* `matrix[0][0]` → 1
* `matrix[0][2]` → 3
* `matrix[1][1]` → 5

### Use Cases

* Matrix operations
* Table or grid representation
* Game boards
* Image processing

---

## 3. Multi-Dimensional Array (Optional)

### Explanation

A multi-dimensional array contains **more than two dimensions**.
It is mainly used when data becomes **complex** and needs multiple levels of indexing.

### Example

`int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};`

### Accessing Elements

* `arr[0][0][0]` → 1
* `arr[1][1][1]` → 8

### Use Cases

* 3D graphics
* Scientific calculations
* Complex data modeling

---

## Key Differences

* 1D Array → Single index, linear data
* 2D Array → Two indices, row-column data
* Multi-D Array → More than two indices

---

## Important Points

* Array indexing always starts from 0
* All elements must be of same data type
* Size of array should be defined clearly

---

