$(warning Starting Makefile)

CXX=g++

main.exe: main.cpp
    $(CXX) main.cpp -o main.exe

clean: 
    -rm main.exe