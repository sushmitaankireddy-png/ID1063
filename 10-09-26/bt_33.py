import matplotlib.pyplot as plt
import numpy as np

# Initial values and Newton-Raphson step
x0 = 1.0
f_x0 = np.exp(x0) - 2
df_x0 = np.exp(x0)
x1 = x0 - f_x0 / df_x0

# Generate points for the curve and tangent line
x = np.linspace(0, 1.5, 100)
y = np.exp(x) - 2
y_tangent = df_x0 * (x - x0) + f_x0

# Plot curve and tangent line
plt.plot(x, y, label='e^x - 2')
plt.plot(x, y_tangent, label='Tangent line')
plt.axhline(0, color='black')  # x-axis

# Plot x0 and x1 points
plt.plot(x0, f_x0, 'ro', label='x0 = 1.0')
plt.plot(x1, 0, 'go', label=f'x1 = {x1:.2f}')

# Add graph details
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True)
plt.legend()

plt.savefig('plot.pdf')

