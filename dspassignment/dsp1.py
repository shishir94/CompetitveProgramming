import soundfile as sf
import sounddevice as sd
from matplotlib import pyplot as plt
import numpy as np

np.seterr(divide = 'ignore')

sig, fs = sf.read('Hey Jude.pcm', channels=2, samplerate=48000,format='RAW', subtype='PCM_16')
#sig, fs = sf.read('Feeling_Good.pcm', channels=2, samplerate=48000,format='RAW', subtype='PCM_16')
print(sig)
# start_point=1
# total_len=400000

# ch1=[]
# ch2=[]
# #for i in range(len(sig)):
# for i in range(start_point,start_point+total_len):
# 	ch1.append(sig[i][0])
# 	ch2.append(sig[i][1])

#sd.play(ch1, fs)
#sd.play(ch2, fs)
#sd.play(sig, fs)

##window_len=100
##ch2_f=[]
##for i in range(total_len-window_len):
##    sum=0.0
##    for j in range(window_len):
##        sum=sum+ch2[i+j]
##    ch2_f.append(sum/(1.0*window_len))
##
##
##plt.figure(figsize=(20,10))
##plt.specgram(ch2, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
##

#H(z) = (1-a)/(1-az^(-1))
# a=0.98
# neum=[]
#for i in range(10):
#        neum.append(1/10.0)
# neum=[(1-a)/2, -(1-a)/2]
# denom=[a] #the 1 has to be removed
# ch2_f=[]

# for n in range(total_len):
#     sum=0.0
#     for j in range(min(n,len(neum))):
#         sum=sum+neum[j]*ch2[n-j]
#     for j in range(1,min(n,len(denom))):
#         sum=sum-denom[j]*ch2_f[n-j]

#     ch2_f.append(sum)

##plt.figure(figsize=(20,10))
##plt.specgram(ch2_f, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
##plt.show()

# f, axarr = plt.subplots(2, sharex=True, figsize=(20,10))
# axarr[0].specgram(ch2, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
# axarr[1].specgram(ch2_f, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
# plt.show()

##f, axarr = plt.subplots(2, sharex=True, figsize=(20,10))
##axarr[0].specgram(ch2, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
##axarr[1].specgram(ch2_f, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
##plt.show()
##
##def fir_high_pass(samples, fs, fH, N, outputType):
##    # Referece: https://fiiir.com
##
##    fH = fH / fs
##
##    # Compute sinc filter.
##    h = np.sinc(2 * fH * (np.arange(N) - (N - 1) / 2.))
##    # Apply window.
##    h *= np.hamming(N)
##    # Normalize to get unity gain.
##    h /= np.sum(h)
##    # Create a high-pass filter from the low-pass filter through spectral inversion.
##    h = -h
##    h[int((N - 1) / 2)] += 1
##    # Applying the filter to a signal s can be as simple as writing
##    s = np.convolve(samples, h).astype(outputType)
##    return s
##
##def fir_low_pass(samples, fs, fL, N, outputType):
##    # Referece: https://fiiir.com
##    fL = fL / fs
##    # Compute sinc filter.
##    h = np.sinc(2 * fL * (np.arange(N) - (N - 1) / 2.))
##    # Apply window.
##    h *= np.hamming(N)
##    # Normalize to get unity gain.
##    h /= np.sum(h)
##    # Applying the filter to a signal s can be as simple as writing
##    s = np.convolve(samples, h).astype(outputType)
##    return s
##
##def fir_band_reject(samples, fs, fL, fH, NL, NH, outputType):
##    # Referece: https://fiiir.com
##    fH = fH / fs
##    fL = fL / fs
##    # Compute a low-pass filter with cutoff frequency fL.
##    hlpf = np.sinc(2 * fL * (np.arange(NL) - (NL - 1) / 2.))
##    hlpf *= np.blackman(NL)
##    hlpf /= np.sum(hlpf)
##    # Compute a high-pass filter with cutoff frequency fH.
##    hhpf = np.sinc(2 * fH * (np.arange(NH) - (NH - 1) / 2.))
##    hhpf *= np.blackman(NH)
##    hhpf /= np.sum(hhpf)
##    hhpf = -hhpf
##    hhpf[int((NH - 1) / 2)] += 1
##    # Add both filters.
##    if NH >= NL:
##        h = hhpf
##        h[int((NH - NL) / 2) : int((NH - NL) / 2 + NL)] += hlpf
##    else:
##        h = hlpf
##        h[int((NL - NH) / 2) : int((NL - NH) / 2 + NH)] += hhpf
##    # Applying the filter to a signal s can be as simple as writing
##    s = np.convolve(samples, h).astype(outputType)
##
##    return s
##
##def fir_band_pass(samples, fs, fL, fH, NL, NH, outputType):
##    # Referece: https://fiiir.com
##    fH = fH / fs
##    fL = fL / fs
##    # Compute a low-pass filter with cutoff frequency fH.
##    hlpf = np.sinc(2 * fH * (np.arange(NH) - (NH - 1) / 2.))
##    hlpf *= np.blackman(NH)
##    hlpf /= np.sum(hlpf)
##    # Compute a high-pass filter with cutoff frequency fL.
##    hhpf = np.sinc(2 * fL * (np.arange(NL) - (NL - 1) / 2.))
##    hhpf *= np.blackman(NL)
##    hhpf /= np.sum(hhpf)
##    hhpf = -hhpf
##    hhpf[int((NL - 1) / 2)] += 1
##    # Convolve both filters.
##    h = np.convolve(hlpf, hhpf)
##    # Applying the filter to a signal s can be as simple as writing
##    s = np.convolve(samples, h).astype(outputType)
##    return s
##
###https://fiiir.com
###https://americodias.com/docs/python/audio_python.md
##
##samples_filtered = fir_band_pass(ch2, fs, 5000, 10000, 419, 419, np.float64)
##samples_filtered = fir_low_pass(ch2, fs, 5000,419, np.float64)
##samples_filtered = fir_high_pass(ch2, fs, 5000,419, np.float64)
##f, axarr = plt.subplots(3, sharex=True, figsize=(20,10))
##axarr[0].specgram(ch1, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
##axarr[1].specgram(ch2, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
##axarr[2].specgram(samples_filtered, Fs=fs, NFFT=1024, noverlap=192, cmap='nipy_spectral')	
###plt.show()
##
###to remove voice
##lp_samples_filtered = fir_low_pass(ch2, fs, 300, 461, np.float64)               # First pass
##lp_samples_filtered = fir_low_pass(lp_samples_filtered, fs, 250, 461, np.float64)   # Second pass
##
##hp_samples_filtered = fir_high_pass(ch2, fs, 6600, 461, np.float64)             # First pass
##hp_samples_filtered = fir_high_pass(hp_samples_filtered, fs, 6600, 461, np.float64) # Second pass
##
##samples_filtered = np.mean(np.array([lp_samples_filtered, hp_samples_filtered]), axis=0).astype(np.float64)
