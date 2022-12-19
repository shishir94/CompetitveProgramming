import cv2
import numpy as np
import matplotlib.pyplot as plt
img = cv2.imread('12140180.jpg',0)
I = img[256][:]
# n = min(I)
m = max(I)
# for i in I:
#     print(i,end=" ")
# print()
# print(n)
# print(m)
O = [(i/m)**0.25 for i in I]
x = np.linspace(-1,1,len(O))
# print(x)


# q = [(w-0.259)/0.741 for w in O]
plt.ylabel("Relative Temperature")
plt.xlabel("Relative Radius")
# plt.ylabel("Cos Theta")
plt.plot(x,O)
plt.show()