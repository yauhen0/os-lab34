g++ -c -o n/build/n.o n/number.cpp
ar r n/build/libN.a n/build/n.o

g++ -c -o v/build/v.o v/vector.cpp -In -Ln/build -ln
g++ -shared -o V/build/libV.so v/build/vector.o

g++ -o main/main main/main.cpp -Ln/build -Lv/build -ln -lv -Iv -In
cd main
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../v/build
./main
cd ../