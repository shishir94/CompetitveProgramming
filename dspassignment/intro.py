# Audio file format 
# .mp3 (most popular , compresses the data , in this we can lose the data)
# .flac (compresses the data but it alse allows to perfectly reconstruct the data)
# .wav (uncompressed data ,stores the data in uncopmressed format , audio quality here is best ,file size is largest
#       wave is standard for cd audio quality ).

# how we can work with a wave audio file
import wave

# Audio signal parameters
# - number of channlels(usually one or two where one is mono and two is stereo this is the number of independent
#             audio channels. stereo means audio  is coming from two different directions).
# - sample width - (number of bytes for each sample )
# - framerate/sampe_rate/ sample frequency - (number of smaple for each seconds) we usually se 44,100 hz which means that
#        this means that we get 44,100 samples each seconds.
# - number of frame
# - value of frame - this will be in binary format.

obj = wave.open("testaudio.wav","rb")
print("Number of channels",obj.getnchannels())
print("sample width",obj.getsampwidth())
print("frame rate",obj.getframerate())
print("number of frames",obj.getnframes())
print("parameters",obj.getparams())
t_audio = obj.getnframes()/obj.getframerate()
print(t_audio)


frames = obj.readframes(-1)
print(type(frames),type(frames[0]))
print(len(frames)/2)
obj.close()

obj_new = ("testaudio_new.wav","wb")
obj_new.setnchannels(2)
obj_new.setsampwidth(2)
obj_new.setframerate(44100.0)

obj_new.writeframes(frames)
obj_new.close()