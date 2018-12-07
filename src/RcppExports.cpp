// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// update_alpha
Rcpp::List update_alpha(const arma::mat& Amat, const arma::mat& Q, const arma::vec& ss, const arma::vec& gs, const arma::mat& Y, const arma::vec& PIs, arma::mat& ALPHAS, const arma::vec& delta0);
RcppExport SEXP _dina_update_alpha(SEXP AmatSEXP, SEXP QSEXP, SEXP ssSEXP, SEXP gsSEXP, SEXP YSEXP, SEXP PIsSEXP, SEXP ALPHASSEXP, SEXP delta0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Amat(AmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ss(ssSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type PIs(PIsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ALPHAS(ALPHASSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type delta0(delta0SEXP);
    rcpp_result_gen = Rcpp::wrap(update_alpha(Amat, Q, ss, gs, Y, PIs, ALPHAS, delta0));
    return rcpp_result_gen;
END_RCPP
}
// update_sg
Rcpp::List update_sg(const arma::mat& Y, const arma::mat& Q, const arma::mat& ALPHAS, const arma::vec& ss_old, double as0, double bs0, double ag0, double bg0);
RcppExport SEXP _dina_update_sg(SEXP YSEXP, SEXP QSEXP, SEXP ALPHASSEXP, SEXP ss_oldSEXP, SEXP as0SEXP, SEXP bs0SEXP, SEXP ag0SEXP, SEXP bg0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ALPHAS(ALPHASSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ss_old(ss_oldSEXP);
    Rcpp::traits::input_parameter< double >::type as0(as0SEXP);
    Rcpp::traits::input_parameter< double >::type bs0(bs0SEXP);
    Rcpp::traits::input_parameter< double >::type ag0(ag0SEXP);
    Rcpp::traits::input_parameter< double >::type bg0(bg0SEXP);
    rcpp_result_gen = Rcpp::wrap(update_sg(Y, Q, ALPHAS, ss_old, as0, bs0, ag0, bg0));
    return rcpp_result_gen;
END_RCPP
}
// DINA_Gibbs_cpp
Rcpp::List DINA_Gibbs_cpp(const arma::mat& Y, const arma::mat& Q, unsigned int chain_length);
RcppExport SEXP _dina_DINA_Gibbs_cpp(SEXP YSEXP, SEXP QSEXP, SEXP chain_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type chain_length(chain_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(DINA_Gibbs_cpp(Y, Q, chain_length));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dina_update_alpha", (DL_FUNC) &_dina_update_alpha, 8},
    {"_dina_update_sg", (DL_FUNC) &_dina_update_sg, 8},
    {"_dina_DINA_Gibbs_cpp", (DL_FUNC) &_dina_DINA_Gibbs_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_dina(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
