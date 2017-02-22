edit:writehello.exe writebinhello.exe
writehello.exe:writehello.cpp
	gcc writehello.cpp -o".\writehello.exe"

writebinhello.exe:writebinhello.cpp
	gcc writebinhello.cpp -o".\writebinhello.exe"



