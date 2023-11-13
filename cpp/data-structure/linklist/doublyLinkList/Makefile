all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/List.cpp -o ./lib/List.o
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o
bagla:
	g++ ./lib/List.o ./lib/Node.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program