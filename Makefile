cc=g++
ccFlags=-std=c++11
files=main.cpp

default: $(files)
	$(cc) $(ccFlags) $(files)

clean:
	rm -f *.o a.out
