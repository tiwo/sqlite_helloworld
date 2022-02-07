compile-linux:
	gcc -fPIC -shared sqlite_helloworld.c -o dist/helloworld.so

compile-windows:
	gcc -shared -I. sqlite_helloworld.c -o dist/helloworld.dll