if not exist build md build
cd build
cmake -G "Unix Makefiles" ..
make
sample.exe