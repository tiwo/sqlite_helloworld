headers = include/3370200

compile-linux:
	gcc -fPIC -shared -I$(headers) sqlite_helloworld.c -o dist/helloworld.so
	gcc -fPIC -shared -I$(headers) sqlite_errorwhenloaded.c -o dist/errorwhenloaded.so

compile-windows:
	gcc -shared -I$(headers) sqlite_helloworld.c -o dist/helloworld.dll
	gcc -shared -I$(headers) sqlite_errorwhenloaded.c -o dist/errorwhenloaded.dll