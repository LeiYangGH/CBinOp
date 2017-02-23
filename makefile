edit:writehello.exe writebinhello.exe  readbinhello.exe
writehello.exe:writehello.cpp
	gcc writehello.cpp -o".\writehello.exe"

writebinhello.exe:writebinhello.cpp
	gcc writebinhello.cpp -o".\writebinhello.exe"

readbinhello.exe:readbinhello.cpp
	gcc readbinhello.cpp -o".\readbinhello.exe"



