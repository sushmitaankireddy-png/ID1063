import numpy as np
import matplotlib.pyplot as plt

c1 = np.array([0.5, 0.0])
r1 = 0.5
c2 = np.array([1.0, 1.0])
r2 = 1.0

h = np.array([[1.0], [0.0]])
m = np.array([[1.0], [-0.5]])
c1_vec = np.array([[0.5], [0.0]])

d = h - c1_vec

a = float((m.T @ m).item())
b = float((2 * (d.T @ m)).item())
c = float((d.T @ d - r1**2).item())

k_values = np.roots([a, b, c])
print("Calculated k values:", k_values)

intersection_points = [h + k * m for k in k_values]
for i, pt in enumerate(intersection_points):
    print(f"Intersection point {i+1}: {pt.flatten()}")

theta = np.linspace(0, 2 * np.pi, 400)
x1 = c1[0] + r1 * np.cos(theta)
y1 = c1[1] + r1 * np.sin(theta)
x2 = c2[0] + r2 * np.cos(theta)
y2 = c2[1] + r2 * np.sin(theta)

plt.figure(figsize=(6, 6))
plt.plot(x1, y1, label='Circle 1', color='blue')
plt.plot(x2, y2, label='Circle 2', color='green')

k_range = np.linspace(-1, 1, 100)
line_pts = np.array([h + kv * m for kv in k_range])
plt.plot(line_pts[:, 0, 0], line_pts[:, 1, 0], 'r--', label='Parametric Line')

for pt in intersection_points:
    px, py = float(pt[0]), float(pt[1])
    plt.scatter(px, py, color='red', zorder=5)
    plt.text(px + 0.05, py + 0.05, f"({px:.1f}, {py:.1f})", fontsize=10)

plt.axhline(0, color='black', linewidth=0.5)
plt.axvline(0, color='black', linewidth=0.5)
plt.grid(True, linestyle='--', alpha=0.6)
plt.axis('equal')
plt.legend(loc='upper left')
plt.title('Circle Intersections Verification')
plt.savefig("circle9.png")
