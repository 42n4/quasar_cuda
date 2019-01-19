// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cppCalculateCfunDcfun
List cppCalculateCfunDcfun(const NumericMatrix& wavelengthsMatrix, SEXP rReglin, SEXP rCReglin);
RcppExport SEXP _QuasarFitCuda_cppCalculateCfunDcfun(SEXP wavelengthsMatrixSEXP, SEXP rReglinSEXP, SEXP rCReglinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type wavelengthsMatrix(wavelengthsMatrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rReglin(rReglinSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rCReglin(rCReglinSEXP);
    rcpp_result_gen = Rcpp::wrap(cppCalculateCfunDcfun(wavelengthsMatrix, rReglin, rCReglin));
    return rcpp_result_gen;
END_RCPP
}
// cppFixReglin
List cppFixReglin(SEXP cReglinVector, SEXP reglinVector);
RcppExport SEXP _QuasarFitCuda_cppFixReglin(SEXP cReglinVectorSEXP, SEXP reglinVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type cReglinVector(cReglinVectorSEXP);
    Rcpp::traits::input_parameter< SEXP >::type reglinVector(reglinVectorSEXP);
    rcpp_result_gen = Rcpp::wrap(cppFixReglin(cReglinVector, reglinVector));
    return rcpp_result_gen;
END_RCPP
}
// cppCalculateContinuumMatrix
NumericMatrix cppCalculateContinuumMatrix(const NumericMatrix& wavelengthsMatrix, SEXP reglinVector);
RcppExport SEXP _QuasarFitCuda_cppCalculateContinuumMatrix(SEXP wavelengthsMatrixSEXP, SEXP reglinVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type wavelengthsMatrix(wavelengthsMatrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type reglinVector(reglinVectorSEXP);
    rcpp_result_gen = Rcpp::wrap(cppCalculateContinuumMatrix(wavelengthsMatrix, reglinVector));
    return rcpp_result_gen;
END_RCPP
}
// cppReduceContinuumChisq
NumericVector cppReduceContinuumChisq(NumericVector& chisq, const IntegerVector sizes);
RcppExport SEXP _QuasarFitCuda_cppReduceContinuumChisq(SEXP chisqSEXP, SEXP sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type chisq(chisqSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type sizes(sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(cppReduceContinuumChisq(chisq, sizes));
    return rcpp_result_gen;
END_RCPP
}
// cppExpandTemplate
NumericMatrix cppExpandTemplate(const NumericMatrix& wavelengths, const IntegerVector& sizes, const NumericVector& feWavelengths, const NumericVector& feSpectrum, const List& feFitParams);
RcppExport SEXP _QuasarFitCuda_cppExpandTemplate(SEXP wavelengthsSEXP, SEXP sizesSEXP, SEXP feWavelengthsSEXP, SEXP feSpectrumSEXP, SEXP feFitParamsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type wavelengths(wavelengthsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type feWavelengths(feWavelengthsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type feSpectrum(feSpectrumSEXP);
    Rcpp::traits::input_parameter< const List& >::type feFitParams(feFitParamsSEXP);
    rcpp_result_gen = Rcpp::wrap(cppExpandTemplate(wavelengths, sizes, feWavelengths, feSpectrum, feFitParams));
    return rcpp_result_gen;
END_RCPP
}
// cppCountNInfSize
IntegerVector cppCountNInfSize(const NumericMatrix& inputMatrix);
RcppExport SEXP _QuasarFitCuda_cppCountNInfSize(SEXP inputMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cppCountNInfSize(inputMatrix));
    return rcpp_result_gen;
END_RCPP
}
// cppCopyNInf
NumericMatrix cppCopyNInf(const NumericMatrix& inputMatrix, const size_t newHeight);
RcppExport SEXP _QuasarFitCuda_cppCopyNInf(SEXP inputMatrixSEXP, SEXP newHeightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    Rcpp::traits::input_parameter< const size_t >::type newHeight(newHeightSEXP);
    rcpp_result_gen = Rcpp::wrap(cppCopyNInf(inputMatrix, newHeight));
    return rcpp_result_gen;
END_RCPP
}
// cppFilterWithValues
List cppFilterWithValues(const NumericMatrix& wavelengthMatrix, const NumericMatrix& spectrumMatrix, const NumericMatrix& errorMatrix, const NumericVector& sizes);
RcppExport SEXP _QuasarFitCuda_cppFilterWithValues(SEXP wavelengthMatrixSEXP, SEXP spectrumMatrixSEXP, SEXP errorMatrixSEXP, SEXP sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type wavelengthMatrix(wavelengthMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type spectrumMatrix(spectrumMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type errorMatrix(errorMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sizes(sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(cppFilterWithValues(wavelengthMatrix, spectrumMatrix, errorMatrix, sizes));
    return rcpp_result_gen;
END_RCPP
}
// cppFilterWithParagon
List cppFilterWithParagon(const NumericMatrix& paragonMatrix, const NumericMatrix& aMatrix, const NumericMatrix& bMatrix, const IntegerVector& sizes);
RcppExport SEXP _QuasarFitCuda_cppFilterWithParagon(SEXP paragonMatrixSEXP, SEXP aMatrixSEXP, SEXP bMatrixSEXP, SEXP sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type paragonMatrix(paragonMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type aMatrix(aMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type bMatrix(bMatrixSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type sizes(sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(cppFilterWithParagon(paragonMatrix, aMatrix, bMatrix, sizes));
    return rcpp_result_gen;
END_RCPP
}
// cppFilterWithWavelengthWindows
List cppFilterWithWavelengthWindows(const NumericMatrix& wavelengthsMatrix, const NumericMatrix& spectrumsMatrix, const NumericMatrix& errorsMatrix, const IntegerVector& sizesVectorR, SEXP continuumWindowsVectorR);
RcppExport SEXP _QuasarFitCuda_cppFilterWithWavelengthWindows(SEXP wavelengthsMatrixSEXP, SEXP spectrumsMatrixSEXP, SEXP errorsMatrixSEXP, SEXP sizesVectorRSEXP, SEXP continuumWindowsVectorRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type wavelengthsMatrix(wavelengthsMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type spectrumsMatrix(spectrumsMatrixSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type errorsMatrix(errorsMatrixSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type sizesVectorR(sizesVectorRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type continuumWindowsVectorR(continuumWindowsVectorRSEXP);
    rcpp_result_gen = Rcpp::wrap(cppFilterWithWavelengthWindows(wavelengthsMatrix, spectrumsMatrix, errorsMatrix, sizesVectorR, continuumWindowsVectorR));
    return rcpp_result_gen;
END_RCPP
}
// cppMatrixLog10
Rcpp::NumericMatrix cppMatrixLog10(const Rcpp::NumericMatrix& inputMatrix);
RcppExport SEXP _QuasarFitCuda_cppMatrixLog10(SEXP inputMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMatrixLog10(inputMatrix));
    return rcpp_result_gen;
END_RCPP
}
// cppMatrixAddScalar
SEXP cppMatrixAddScalar(Rcpp::NumericMatrix inputMatrix, double scalar);
RcppExport SEXP _QuasarFitCuda_cppMatrixAddScalar(SEXP inputMatrixSEXP, SEXP scalarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type inputMatrix(inputMatrixSEXP);
    Rcpp::traits::input_parameter< double >::type scalar(scalarSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMatrixAddScalar(inputMatrix, scalar));
    return rcpp_result_gen;
END_RCPP
}
// cppMatrixMinusMatrix
SEXP cppMatrixMinusMatrix(Rcpp::NumericMatrix& inputMatrix, Rcpp::NumericMatrix& substrahendMatrix);
RcppExport SEXP _QuasarFitCuda_cppMatrixMinusMatrix(SEXP inputMatrixSEXP, SEXP substrahendMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type substrahendMatrix(substrahendMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMatrixMinusMatrix(inputMatrix, substrahendMatrix));
    return rcpp_result_gen;
END_RCPP
}
// cppMatrixDivideMatrix
SEXP cppMatrixDivideMatrix(Rcpp::NumericMatrix& inputMatrix, Rcpp::NumericMatrix& divisorMatrix);
RcppExport SEXP _QuasarFitCuda_cppMatrixDivideMatrix(SEXP inputMatrixSEXP, SEXP divisorMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type divisorMatrix(divisorMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMatrixDivideMatrix(inputMatrix, divisorMatrix));
    return rcpp_result_gen;
END_RCPP
}
// cppMatrixMultiplyCol
SEXP cppMatrixMultiplyCol(Rcpp::NumericMatrix& inputMatrix, Rcpp::NumericVector& vector);
RcppExport SEXP _QuasarFitCuda_cppMatrixMultiplyCol(SEXP inputMatrixSEXP, SEXP vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vector(vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMatrixMultiplyCol(inputMatrix, vector));
    return rcpp_result_gen;
END_RCPP
}
// cppMatrixTranspose
SEXP cppMatrixTranspose(Rcpp::NumericMatrix inputMatrix);
RcppExport SEXP _QuasarFitCuda_cppMatrixTranspose(SEXP inputMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type inputMatrix(inputMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMatrixTranspose(inputMatrix));
    return rcpp_result_gen;
END_RCPP
}
// cppMovingAverage
NumericMatrix cppMovingAverage(const NumericMatrix& inputMatrix, const IntegerVector& colsSizeVector, uint windowSize);
RcppExport SEXP _QuasarFitCuda_cppMovingAverage(SEXP inputMatrixSEXP, SEXP colsSizeVectorSEXP, SEXP windowSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type inputMatrix(inputMatrixSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colsSizeVector(colsSizeVectorSEXP);
    Rcpp::traits::input_parameter< uint >::type windowSize(windowSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cppMovingAverage(inputMatrix, colsSizeVector, windowSize));
    return rcpp_result_gen;
END_RCPP
}
// cppGenerateWavelenghtMatrix
NumericMatrix cppGenerateWavelenghtMatrix(SEXP params);
RcppExport SEXP _QuasarFitCuda_cppGenerateWavelenghtMatrix(SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(cppGenerateWavelenghtMatrix(params));
    return rcpp_result_gen;
END_RCPP
}
// cppReglin
SEXP cppReglin(const NumericMatrix& x, const NumericMatrix& y, const IntegerVector& sizes);
RcppExport SEXP _QuasarFitCuda_cppReglin(SEXP xSEXP, SEXP ySEXP, SEXP sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type sizes(sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(cppReglin(x, y, sizes));
    return rcpp_result_gen;
END_RCPP
}
// cppChisq
NumericVector cppChisq(const NumericMatrix& x, const NumericMatrix& y, const NumericMatrix& e, const NumericVector& sizes);
RcppExport SEXP _QuasarFitCuda_cppChisq(SEXP xSEXP, SEXP ySEXP, SEXP eSEXP, SEXP sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type e(eSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sizes(sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(cppChisq(x, y, e, sizes));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_QuasarFitCuda_cppCalculateCfunDcfun", (DL_FUNC) &_QuasarFitCuda_cppCalculateCfunDcfun, 3},
    {"_QuasarFitCuda_cppFixReglin", (DL_FUNC) &_QuasarFitCuda_cppFixReglin, 2},
    {"_QuasarFitCuda_cppCalculateContinuumMatrix", (DL_FUNC) &_QuasarFitCuda_cppCalculateContinuumMatrix, 2},
    {"_QuasarFitCuda_cppReduceContinuumChisq", (DL_FUNC) &_QuasarFitCuda_cppReduceContinuumChisq, 2},
    {"_QuasarFitCuda_cppExpandTemplate", (DL_FUNC) &_QuasarFitCuda_cppExpandTemplate, 5},
    {"_QuasarFitCuda_cppCountNInfSize", (DL_FUNC) &_QuasarFitCuda_cppCountNInfSize, 1},
    {"_QuasarFitCuda_cppCopyNInf", (DL_FUNC) &_QuasarFitCuda_cppCopyNInf, 2},
    {"_QuasarFitCuda_cppFilterWithValues", (DL_FUNC) &_QuasarFitCuda_cppFilterWithValues, 4},
    {"_QuasarFitCuda_cppFilterWithParagon", (DL_FUNC) &_QuasarFitCuda_cppFilterWithParagon, 4},
    {"_QuasarFitCuda_cppFilterWithWavelengthWindows", (DL_FUNC) &_QuasarFitCuda_cppFilterWithWavelengthWindows, 5},
    {"_QuasarFitCuda_cppMatrixLog10", (DL_FUNC) &_QuasarFitCuda_cppMatrixLog10, 1},
    {"_QuasarFitCuda_cppMatrixAddScalar", (DL_FUNC) &_QuasarFitCuda_cppMatrixAddScalar, 2},
    {"_QuasarFitCuda_cppMatrixMinusMatrix", (DL_FUNC) &_QuasarFitCuda_cppMatrixMinusMatrix, 2},
    {"_QuasarFitCuda_cppMatrixDivideMatrix", (DL_FUNC) &_QuasarFitCuda_cppMatrixDivideMatrix, 2},
    {"_QuasarFitCuda_cppMatrixMultiplyCol", (DL_FUNC) &_QuasarFitCuda_cppMatrixMultiplyCol, 2},
    {"_QuasarFitCuda_cppMatrixTranspose", (DL_FUNC) &_QuasarFitCuda_cppMatrixTranspose, 1},
    {"_QuasarFitCuda_cppMovingAverage", (DL_FUNC) &_QuasarFitCuda_cppMovingAverage, 3},
    {"_QuasarFitCuda_cppGenerateWavelenghtMatrix", (DL_FUNC) &_QuasarFitCuda_cppGenerateWavelenghtMatrix, 1},
    {"_QuasarFitCuda_cppReglin", (DL_FUNC) &_QuasarFitCuda_cppReglin, 3},
    {"_QuasarFitCuda_cppChisq", (DL_FUNC) &_QuasarFitCuda_cppChisq, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_QuasarFitCuda(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
