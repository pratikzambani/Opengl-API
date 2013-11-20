all :
	g++ -lSDL -lGLU -lglut -std=c++0x  test2IGL.cpp 
	./a.out
clean :
	rm -f basic
