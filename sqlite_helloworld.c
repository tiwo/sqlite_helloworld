#include <stddef.h>
#include <sqlite3ext.h>
SQLITE_EXTENSION_INIT1


static void helloFunc(
    sqlite3_context *ctx,
    int argc,
    sqlite3_value **argv
) {
    sqlite3_result_text(ctx, "\u2764 Hello, world! \u2764", -1, SQLITE_TRANSIENT);
}

#ifdef _WIN32
__declspec(dllexport)
#endif

int sqlite3_helloworld_init(
  sqlite3 *db, 
  char **pzErrMsg, 
  const sqlite3_api_routines *pApi
){

  int error = SQLITE_OK;
  SQLITE_EXTENSION_INIT2(pApi);

  error = sqlite3_create_function(
    db,
        /* sqlite *db */
    "helloworld",
        /* const char *zFunctionName */
    0,
        /* int nArg */
    SQLITE_UTF8 | SQLITE_DETERMINISTIC | SQLITE_INNOCUOUS,
        /* int eTextRep; flags: arguments' encoding, innocuos even if abused, deterministic */
    NULL,
        /* void *pApp; an arbitrary pointer */
    helloFunc,
        /* void (*xFunc)(sqlite3_context*,int,sqlite3_value**) */
    NULL,
        /* void (*xStep)(sqlite3_context*,int,sqlite3_value**) */
    NULL
        /* void (*xFinal)(sqlite3_context*) */
  );
  if (error != SQLITE_OK) {
      return error;
  }

  return SQLITE_OK;
}