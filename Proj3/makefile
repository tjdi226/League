OBJECTS = main.o league.h team.h
HEADERS = league.h team.h 
main: $(OBJECTS)
	g++ $^ -o main
%.o %.cpp $(HEADERS)
	g++ -c $< -o $@
clean:
	rm -f *.o main
