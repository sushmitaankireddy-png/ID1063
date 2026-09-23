import numpy as np

# Test case datasets
data = np.array([3, 4, 0, 5])
data1 = np.array([1, -1, 1, -1])
data2 = np.array([7.5])

# Calculate RMS values using np.pow
rms = np.sqrt(np.mean(np.pow(data, 2)))
rms1 = np.sqrt(np.mean(np.pow(data1, 2)))
rms2 = np.sqrt(np.mean(np.pow(data2, 2)))

# Print formatted outputs
print(f"The Rms value of the test case 1 is {rms:.2f}")
print(f"The Rms value of the test case 2 is {rms1:.2f}")
print(f"The Rms value of the test case 3 is {rms2:.2f}")


