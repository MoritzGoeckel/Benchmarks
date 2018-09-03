echo "Executing benchmarks"

echo ""
echo "C"
time ./bin/cbench

echo ""
echo "GO"
time ./bin/gobench

echo ""
echo "Java"
time java -cp bin avg
