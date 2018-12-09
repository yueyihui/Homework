section1: section1.cpp
	g++ -Wall -ggdb3 -o $@ $^

section2: section2.cpp
	g++ -Wall -ggdb3 -o $@ $^

section3: section3.cpp
	g++ -Wall -ggdb3 -o $@ $^

clean:
	find -type f -executable -delete
	find -type f -name *.o -delete
