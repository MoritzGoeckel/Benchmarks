mkdir -p bin

echo "Building C..."
rm bin/cbench
gcc src/avg.c
mv a.out bin/cbench

echo "Building Go..."
rm bin/gobench
go build src/go/avg.go
mv avg bin/gobench

echo "Building Java..."
rm bin/avg.class
javac src/avg.java
mv src/avg.class bin/avg.class
