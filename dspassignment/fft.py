import numpy as np
import matplotlib.pyplot as plt
plt.rcParams['figure.figsize'] = [16,12]  # size of the white page
plt.rcParams.update({'font.size':18})

# Create a simple signal with two frequencies
dt = 0.001
t = np.arange(0,1,dt)
f = np.sin(2*np.pi*50*t)+np.sin(2*np.pi*120*t)   # Adding sin waves
f_clean = f
f = f + 2.5*np.random.randn(len(t))    # Add some noise

plt.plot(t,f,color="c",label="noisy")
plt.plot(t,f_clean,color="k",label="clean")    # plotting waves
plt.xlim(t[0],t[-1])
plt.legend()
plt.show()
