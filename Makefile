
# compile gemmbitserial library and test helpers as .so for 
# cling usage
#

.PHONY: libs



libs:
	g++ gemmbitserial.hpp -shared -fpic -x c++ -o gemmbitserial.so
	cd test; g++ testhelpers.hpp -shared -fpic -x c++ -o testhelpers.so; cp testhelpers.so ../


