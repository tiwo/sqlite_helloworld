# sqlite_helloworld

an sqlite extension where that does not do anything useful.

What is does is this:

    SQLite version 3.31.1 2020-01-27 19:55:54
    sqlite> .load dist/helloworld.so
    sqlite> select helloworld();
    ❤ Hello, world! ❤


## Useful links

Bookmarks into SQLite's developer documentation:

* C-language interface specification: [c3ref/intro](https://www.sqlite.org/c3ref/intro.html), with links 
* Introduction to the SQLite C/C++ interface [cintro](https://www.sqlite.org/cintro.html)
* Result and error codes: [rescode](https://www.sqlite.org/rescode.html), 

* Create or redefine SQL functions: [c3ref/create_function](https://www.sqlite.org/c3ref/create_function.html)
* Setting the result of an SQL function: [c3ref/result_blob](https://www.sqlite.org/c3ref/result_blob.html)