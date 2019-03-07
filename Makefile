clTest: clTest.cpp
	cl clTest.cpp

BehavePets: BehavePets.cpp Animals.cpp Dog.cpp Cat.cpp 
	g++ -o BehavePets BehavePets.cpp Animals.cpp Dog.cpp Cat.cpp 
