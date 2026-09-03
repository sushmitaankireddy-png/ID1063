import numpy as np
import matplotlib.pyplot as plt

t = np.linspace(0, 1.5, 100)
y = 3 * np.exp(np.log(2) * t) - 2

plt.plot(t, y, label=r'$y = 3e^{(\ln 2)t} - 2$')
plt.scatter([0, 1], [1, 4], color='red', zorder=5)
plt.xlabel('t')
plt.ylabel('y')
plt.legend()
plt.savefig('population_growth.png', bbox_inches='tight')

