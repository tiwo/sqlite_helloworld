#include "sqlite3ext.h"
SQLITE_EXTENSION_INIT1
#include <assert.h>
#include <string.h>

#ifdef _WIN32
__declspec(dllexport)
#endif
int sqlite3_errorwhenloaded_init(
  sqlite3 *db, 
  char **pzErrMsg, 
  const sqlite3_api_routines *pApi
){
  return  SQLITE_AUTH;
}