CCX=g++ -std=c++11


a.out: Board.o Cell.o IllegalCharException.o IllegalCoordinateException.o
		$(CCX) main.cpp *.o

Board.o: Board.cpp Board.h
		$(CCX) -c Board.cpp

Cell.o: Cell.cpp Cell.h
		$(CCX) -c Cell.cpp

IllegalCharException.o: IllegalCharException.cpp
		$(CCX) -c IllegalCharException.cpp

IllegalCoordinateException.o: IllegalCoordinateException.cpp
		$(CCX) -c IllegalCoordinateException.cpp

Clean:
		rm *.o a.out
