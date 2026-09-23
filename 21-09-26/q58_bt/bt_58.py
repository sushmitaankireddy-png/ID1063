# Code by Sushmitha Ankireddy
# Date: 21-09-26

import numpy as np

# Matrix A (6x6) for variables: [x1, x2, x3, x4, x5, x6]
# Rows 1-4: Atomic balances (C, N, H, O)
# Rows 5-6: Given values (x1 = 1, x4 = 2.4)
A = np.array(
    [
        [6.0, 0.0, 0.0, -1.0, -1.0, 0.0],  # Carbon: 6*x1 - x4 - x5 = 0
        [0.0, 1.0, 0.0, -0.2, 0.0, 0.0],  # Nitrogen: x2 - 0.2*x4 = 0
        [12.0, 3.0, 0.0, -1.8, 0.0, -2.0],  # Hydrogen: 12*x1 + 3*x2 - 1.8*x4 - 2*x6 = 0
        [6.0, 0.0, 2.0, -0.5, -2.0, -1.0],  # Oxygen: 6*x1 + 2*x3 - 0.5*x4 - 2*x5 - x6 = 0
        [1.0, 0.0, 0.0, 0.0, 0.0, 0.0],  # Glucose constraint: x1 = 1
        [0.0, 0.0, 0.0, 1.0, 0.0, 0.0],  # Biomass constraint: x4 = 2.4
    ]
)

# Right-hand side vector B
B = np.array([0.0, 0.0, 0.0, 0.0, 1.0, 2.4])

# Solve the linear system A * X = B
x1, x2, x3, x4, x5, x6 = np.linalg.solve(A, B)

# Display solved coefficients
print(f"x1 = {x1:.2f}")
print(f"x2 = {x2:.2f}")
print(f"x3 = {x3:.2f}")
print(f"x4 = {x4:.2f}")
print(f"x5 = {x5:.2f}")
print(f"x6 = {x6:.2f}")

print(f"\nMoles of oxygen consumption (x3) = {x3:.2f}")

