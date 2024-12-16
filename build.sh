echo "Clearing prev build"
rm -rf bin/*

echo "Building new main"
g++ -o bin/main src/main.cpp

echo -e "Executing main\n\n"
./bin/main
