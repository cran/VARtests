#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP VARtests_ACtestCpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP VARtests_computeET_LM(SEXP, SEXP);
extern SEXP VARtests_computeMARCH(SEXP, SEXP);
extern SEXP VARtests_makeVar(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"VARtests_ACtestCpp",    (DL_FUNC) &VARtests_ACtestCpp,    10},
    {"VARtests_computeET_LM", (DL_FUNC) &VARtests_computeET_LM,  2},
    {"VARtests_computeMARCH", (DL_FUNC) &VARtests_computeMARCH,  2},
    {"VARtests_makeVar",      (DL_FUNC) &VARtests_makeVar,       8},
    {NULL, NULL, 0}
};

void R_init_VARtests(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
