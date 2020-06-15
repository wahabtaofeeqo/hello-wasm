#include <string>
#include <emscripten/emscripten.h>

using namespace std;

extern "C" {
	char* sayHello();
}

char* sayHello() {
	string message = "From the webAssembly World, we say HELLO TO THE JAVASCRIPT WORLD";
	char* arr = new char(message.length() +1);
	strcpy(arr, message.c_str());
	return arr;
}