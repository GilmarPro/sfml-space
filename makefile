compile:./source/Main.cpp
	g++ -c ./source/Game.cpp -o Game.o
	g++ -c ./source/Main.cpp -o Main.o
	g++ -c ./source/TextureHolder.cpp -o TextureHolder.o
	g++ Main.o Game.o TextureHolder.o -o app.out -lsfml-graphics -lsfml-window -lsfml-system

run:
	./app.out
