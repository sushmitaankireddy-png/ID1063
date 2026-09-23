import numpy as np

# Days in each month for a non-leap year
days_in_months = np.array([31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31])

# Test case from the problem: day = 1, month = 2
day = 1
month = 2

# Sum preceding months + current day
result = np.sum(days_in_months[:month - 1]) + day

print(f"Input: {day} {month}")
print(f"Output: {result}")

