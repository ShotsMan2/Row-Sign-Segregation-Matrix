# Row-Based Sign Matrix Segmentation

This project implements a matrix manipulation algorithm in C that organizes random integers based on their sign (Positive/Negative) into specific rows.

## 📌 Overview

The program generates an $N \times N$ matrix where the data is strictly segregated by row index:
* **Even Rows (0, 2, 4...):** Contain only **Positive** integers.
* **Odd Rows (1, 3, 5...):** Contain only **Negative** integers.

To achieve this, the algorithm pre-calculates the exact number of positive and negative values required based on the matrix dimensions before populating the cells.

## ⚙️ Algorithm Logic

1.  **Requirement Calculation:**
    * The program analyzes $N$ to determine how many even and odd rows exist.
    * *Formula:* Calculates `positive_count` and `negative_count` to ensure the random array is perfectly balanced.
2.  **Balanced Array Generation:**
    * Generates a linear array containing integers in the range $[-10, 10]$.
    * Ensures the array has the exact count of positives and negatives needed for the matrix.
3.  **Matrix Population:**
    * Iterates through the matrix structure.
    * **Condition:** `if (row % 2 == 0)` $\rightarrow$ Insert Positive Number.
    * **Condition:** `else` $\rightarrow$ Insert Negative Number.

## 🚀 Example Output (N=3)

For an input of $N=3$, the matrix requires 6 Positive numbers (Rows 0 & 2) and 3 Negative numbers (Row 1).

**Resulting Matrix:**
|  4 |  7 |  1 |  <-- Row 0 (Positive)
|---|---|---|
| -5 | -2 | -9 |  <-- Row 1 (Negative)
|  3 |  8 |  6 |  <-- Row 2 (Positive)

## 💻 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o sign_matrix
    ```
2.  Run the executable:
    ```bash
    ./sign_matrix
    ```
3.  Enter the matrix size ($N$).

---
*This repository demonstrates conditional array processing and matrix logic in C.*
