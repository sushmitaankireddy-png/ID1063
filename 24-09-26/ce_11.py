# Code by Sushmitha Ankireddy
# Date: 24-09-26

import numpy as np

# Define matrix P
P = np.array([
    [1, 0, 1],
    [0, 1, 0],
    [1, 0, 1]
])

# Option A: Check if trace equals the sum of eigenvalues
trace_P = np.trace(P)
eigenvalues = np.linalg.eigvals(P)
sum_eigenvalues = np.sum(eigenvalues)

print(f"Trace of P: {trace_P}")
print(f"Eigenvalues of P: {eigenvalues}")
print(f"Sum of Eigenvalues: {sum_eigenvalues}")
print(f"Option A is Correct: {np.isclose(trace_P, sum_eigenvalues)}\n")

# Option B: Check if P^T * P is an identity matrix
P_transpose_P = np.matmul(P.T, P)
is_identity = np.array_equal(P_transpose_P, np.eye(3))
print(f"Option B is Correct: {is_identity}\n")

# Option C: Check if P is skew-symmetric (P^T = -P)
is_skew_symmetric = np.array_equal(P.T, -P)
print(f"Option C is Correct: {is_skew_symmetric}\n")

# Option D: Check if absolute magnitude of each eigenvalue is 1
abs_eigenvalues = np.abs(eigenvalues)
all_ones = np.allclose(abs_eigenvalues, 1.0)
print(f"Option D is Correct: {all_ones}")

