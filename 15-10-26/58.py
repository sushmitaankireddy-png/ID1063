import os
import matplotlib.pyplot as plt
import numpy as np

# Define x range for plotting
x = np.linspace(0, 5, 500)
C = 1 / 21

# Define P(x) based on the piecewise conditions
P_x = np.piecewise(
    x,
    [
        (x >= 1) & (x <= 4),
        (x < 1) | (x > 4),
    ],
    [lambda x: C * x**2, 0],
)

# Plotting
plt.figure(figsize=(8, 5))
plt.plot(x, P_x, label="P(x) = (1/21)x²", color="blue", linewidth=2)

# Highlight the region between x = 2 and x = 3
x_fill = np.linspace(2, 3, 100)
plt.fill_between(
    x_fill,
    0,
    C * x_fill**2,
    color="orange",
    alpha=0.5,
    label="P(2 ≤ x ≤ 3)",
)

plt.title("Probability Density Function P(x)")
plt.xlabel("x")
plt.ylabel("P(x)")
plt.axhline(0, color="black", linewidth=0.8, linestyle="--")
plt.grid(True, linestyle=":", alpha=0.6)
plt.legend()

# Save the plot to a file and open it
plt.savefig("pdf_plot.png", dpi=300, bbox_inches="tight")
plt.close()

os.system("termux-open pdf_plot.png")

