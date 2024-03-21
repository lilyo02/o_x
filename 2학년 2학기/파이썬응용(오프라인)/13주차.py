import matplotlib.pyplot as plt

# 개수가 2 X 2개, 크기가 (5, 5)인치
fig, ax = plt.subplots(2, 2, figsize=(5, 5))

ax[0, 0].plot(range(10), 'r') # row=0, col=0
ax[0, 1].plot(range(10), 'b') # row=0, col=1
ax[1, 0].plot(range(10), 'g') # row=1, col=0
ax[1, 1].plot(range(10), 'k') # row=1, col=1
plt.show()
