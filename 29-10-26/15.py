import os
import matplotlib.pyplot as plt
import numpy as np

# Sample indices (first 10 samples, n = 0 to 9) and sampling rate
Fs = 40  # Hz[span_0](start_span)[span_0](end_span)
n = np.arange(10)
t = n / Fs

# Calculate samples
x1 = np.cos(20 * np.pi * t)
x2 = np.cos(100 * np.pi * t)

# Print values and evaluate statements
print("n\tt\t x1[n]\t\t x2[n]")
print("-" * 35)
for i in range(10):
    print(f"{n[i]}\t{t[i]:.3f}\t{x1[i]:.3f}\t\t{x2[i]:.3f}")

print("\n--- EVALUATION ---")
print(f"(A) First 3 greater: {all(x1[:3] > x2[:3])}")
print(f"(B) Last 3 greater: {all(x1[7:] > x2[7:])}")
print(f"(C) All x2 > x1: {all(x2 > x1)}")
print(f"(D) 4th to 7th equal: {np.allclose(x1[3:8], x2[3:8])}")

# Plotting
plt.figure()
plt.plot(t, x1, "bo-", label="x1(t)")
plt.plot(t, x2, "ro--", label="x2(t)")
plt.xlabel("Time (s)")
plt.ylabel("Amplitude")
plt.legend()
plt.grid(True)

# Save and open
plt.savefig("plot.png")
plt.close()
os.system("termux-open plot.png")

