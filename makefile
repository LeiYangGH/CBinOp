edit:writehello.exe writebinhello.exe  readbinhello.exe writebinutf8.exe
writehello.exe:writehello.cpp
	gcc writehello.cpp -o".\writehello.exe"

writebinhello.exe:writebinhello.cpp
	gcc writebinhello.cpp -o".\writebinhello.exe"

readbinhello.exe:readbinhello.cpp
	gcc readbinhello.cpp -o".\readbinhello.exe"

writebinutf8.exe:writebinutf8.cpp
	gcc writebinutf8.cpp -o".\writebinutf8.exe"



