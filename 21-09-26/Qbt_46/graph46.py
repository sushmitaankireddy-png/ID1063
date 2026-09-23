#code by Sushmitha Ankireddy
#date:21-09-26
import shlex
import subprocess
import matplotlib.pyplot as plt
import numpy as np

# Define x values for negative and positive domains
x_neg = np.linspace(-2, 0, 200)
x_pos = np.linspace(0, np.pi, 200)

# Calculate y values (a = 0, b = 2)
y_neg = 2 * x_neg
y_pos = np.sin(2 * x_pos)

# Create the plot
plt.figure(figsize=(8, 5))
plt.plot(x_neg, y_neg, label=r"$f(x) = 2x \quad (x \le 0)$", color="blue", lw=2)
plt.plot(
    x_pos, y_pos, label=r"$f(x) = \sin(2x) \quad (x > 0)$", color="orange", lw=2
)
plt.scatter([0], [0], color="red", zorder=5, label="Point (0,0)")

# Graph formatting
plt.axhline(0, color="black", linewidth=0.8, linestyle="--")
plt.axvline(0, color="black", linewidth=0.8, linestyle="--")
plt.title(r"Graph of $f(x)$", fontsize=14, pad=12)
plt.xlabel("x", fontsize=12)
plt.ylabel("f(x)", fontsize=12)
plt.legend(fontsize=11)
plt.grid(True, linestyle=":", alpha=0.6)

# Save plot to an image file
image_path = "plot.png"
plt.savefig(image_path, bbox_inches="tight", dpi=150)
plt.close()

# Safely construct and execute the command to open the image in Termux
command = f"termux-open {shlex.quote(image_path)}"
subprocess.run(shlex.split(command))

