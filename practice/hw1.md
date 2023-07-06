# HW1

## I declare that I have completed this assigment in accordance with the UAB Academic Integrity Code. I have read the UAB Academic Integrity Code and understand that any breach of the Code may result in severe penalties

Your signature: Adrian Hilton

Date: 9 Sep 2022

### 1. Show product of two upper triangular matrices is upper triangular

A and B are upper triangular if $A_{ij}$ = 0 when i > j.

Let A and B be square matrices.

Let C=AB S.T. $C_{ij}$ = $\displaystyle \sum_{k=1}^nA_{ik}B_{kj}$

$\forall$ $A_{ik}$=0 $\to$ i > k

$\forall$ $B_{kj}$=0 k > j

Per Squeeze Theorem, either i or j are zero for every k since i > j.

$\therefore$ $C_{ij}$ = 0 and AB is upper triangular.

### 2. Let B be a 4x4 matrix to which we apply the following operations

Elementary matrix differs from identity matrix by one row operation. Left multiplication is elementary row operations. Right multiplication is elementary column operation. The result of the product of the subsequent matrices stem from this concept. Let each operation on a matrix be labeled matrix A1, A2,.., A7.

A1.Double column 1

B$\times$A1

$\left[
\begin{array}{ccc}
2 & 0 & 0 & 0\\
0 & 1 & 0 & 0\\
0 & 0 & 1 & 0\\
0 & 0 & 0 & 1\\
\end{array}
\right]$

A2.Halve row 3

A2$\times$B$\times$A1

$\left[
\begin{array}{ccc}
1 & 0 & 0 & 0\\
0 & 1 & 0 & 0\\
0 & 0 & 1/2 & 0\\
0 & 0 & 0 & 1\\
\end{array}
\right]$

A3.Add row 3 to row 1

A3$\times$A2$\times$B$\times$A1

$\left[
\begin{array}{ccc}
1 & 0 & 1 & 0\\
0 & 1 & 0 & 0\\
0 & 0 & 1 & 0\\
0 & 0 & 0 & 1\\
\end{array}
\right]$

A4.Interchange columns 1 and 4

A3$\times$A2$\times$B$\times$A1$\times$A4

$\left[
\begin{array}{ccc}
0 & 0 & 0 & 1\\
0 & 1 & 0 & 0\\
0 & 0 & 1 & 0\\
1 & 0 & 0 & 0\\
\end{array}
\right]$

A5.Subtract row 2 from each of the other rows

A5$\times$A3$\times$A2$\times$B$\times$A1$\times$A4

$\left[
\begin{array}{ccc}
1 & -1 & 0 & 0\\
0 & 1 & 0 & 0\\
0 & -1 & 1 & 0\\
0 & -1 & 0 & 1\\
\end{array}
\right]$

A6.Replace column 4 by column 3

A5$\times$A3$\times$A2$\times$B$\times$A1$\times$A4$\times$A6

$\left[
\begin{array}{ccc}
1 & 0 & 0 & 0\\
0 & 1 & 0 & 0\\
0 & 0 & 1 & 1\\
0 & 0 & 0 & 0\\
\end{array}
\right]$

A7.Delete column 1

A5$\times$A3$\times$A2$\times$B$\times$A1$\times$A4$\times$A6$\times$A7

$\left[
\begin{array}{ccc}
0 & 0 & 0\\
1 & 0 & 0\\
0 & 1 & 0\\
0 & 0 & 1\\
\end{array}
\right]$

a) Result as a product of eight matrices:

A5$\times$A3$\times$A2$\times$B$\times$A1$\times$A4$\times$A6$\times$A7

b) Write as a product ABC (same B) of three matrices:

Let A = elementary row operations A5$\times$A3$\times$A2

$\left[
\begin{array}{ccc}
1 & -1 & 1/2 & 0\\
0 & 1 & 0 & 0\\
0 & -1 & 1/2 & 0\\
0 & -1 & 0 & 1\\
\end{array}
\right]$

Let B = same B

$\left[
\begin{array}{ccc}
1 & 0 & 1 & 0\\
0 & 1 & 0 & 0\\
0 & 0 & 1 & 0\\
0 & 0 & 0 & 1\\
\end{array}
\right]$

Let C = elementary column operations A1$\times$A4$\times$A6$\times$A7

$\left[
\begin{array}{ccc}
0 & 0 & 0\\
1 & 0 & 0\\
0 & 1 & 1\\
0 & 0 & 0\\
\end{array}
\right]$

$\therefore$ ABC = A5$\times$A3$\times$A2$\times$B$\times$A1$\times$A4$\times$A6$\times$A7

### 3. Give an O($n^2$) algorithm for computing C = $(xy^t)^k$, where x and y are n-vectors

ans[n] [n] (as discussed in office hours)

for (i=1; i < n; i++)

    for (j=1; j < n; j++)

ans[i] [j]= x[i] [1] $\cdot$ y[j] [1]

return ans

### 4a. Show that $zz^t$ is positive semi-definite, where z $\in \mathbb{R}^n$ is an n-vector

### 4b. Let A $\in \mathbb{R}^{nxn}$ be positive semidefinite. Let B $\in \mathbb{R}^{mxn}$ be arbitrary. Is $BAB^T$ positive semidefinite? If so, prove it. If not, give a specific counterexample

### 6. (Solomon 1.7) Suppose the rows of A $\in \R^{m \times n}$ are given by the transposes of $\vec{r1},....,\vec{rm} \in \R^n$ and the columns of A $\in \R^{m \times n}$ are given by $\vec{c1},....,\vec{cn} \in \R^m$. Give expressions for the elements of $\ A^TA$ and $\ AA^T$ in terms of these vectors

### 7. (Solomon 2.7a) (Adapted from Stanford CS 205A, 2012) Thanks to foating-point arithmetic, in most implementations of numerical algorithms we cannot expect that computations involving fractional values can be carried out with 100% precision. Instead, every time we do a numerical operation we induce the potential for error. Many models exist for studying how this error a ects the quality of a numerical operation; in this problem, we will explore one common model

### A. Why is this a reasonable model for modeling numerical issues in floating-point arithmetic?

### B
