import shlex
import subprocess
import numpy as np
import matplotlib.pyplot as plt

# 1. System parameters
tau = 40.0              # Time constant in seconds
t = np.linspace(0, 200, 500)

# First-order step response: y(t) = (1 - e^(-t/tau)) * 100%
y = (1 - np.exp(-t / tau)) * 100
t_95 = -tau * np.log(1 - 0.95) # ~119.83 s

# 2. Plotting the response graph
plt.figure(figsize=(8, 5))
plt.plot(t, y, label='Thermometer Response', color='blue', linewidth=2)
plt.axhline(y=95, color='red', linestyle='--', label='95% Steady-State Level')
plt.axvline(x=t_95, color='green', linestyle='--', label=f't ≈ {t_95:.1f} s (≈ 120 s)')
plt.plot(t_95, 95, 'ro', markersize=8)

plt.title('First-Order System Step Response', fontsize=13)
plt.xlabel('Time (seconds)', fontsize=11)
plt.ylabel('Output (% of Steady State)', fontsize=11)
plt.grid(True, linestyle=':', alpha=0.7)
plt.legend(loc='lower right', fontsize=10)
plt.xlim(0, 200)
plt.ylim(0, 105)
plt.tight_layout()

# 3. Save directly to a PDF file
pdf_filename = "response_graph.pdf"
plt.savefig(pdf_filename, format='pdf')
plt.close()

# 4. Open the PDF using shlex and termux-open
command = f"termux-open {shlex.quote(pdf_filename)}"
subprocess.run(shlex.split(command))

