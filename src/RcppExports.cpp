// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cluster_BIC
double cluster_BIC(arma::mat& data, arma::mat& centres);
RcppExport SEXP lowmemtkmeans_cluster_BIC(SEXP dataSEXP, SEXP centresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type centres(centresSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_BIC(data, centres));
    return rcpp_result_gen;
END_RCPP
}
// tkmeans
arma::mat tkmeans(arma::mat& M, int k, double alpha, arma::vec weights, int nstart, int iter, double tol, bool verbose);
RcppExport SEXP lowmemtkmeans_tkmeans(SEXP MSEXP, SEXP kSEXP, SEXP alphaSEXP, SEXP weightsSEXP, SEXP nstartSEXP, SEXP iterSEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type nstart(nstartSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(tkmeans(M, k, alpha, weights, nstart, iter, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// scale_mat_inplace
arma::mat scale_mat_inplace(arma::mat& M);
RcppExport SEXP lowmemtkmeans_scale_mat_inplace(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_mat_inplace(M));
    return rcpp_result_gen;
END_RCPP
}
// nearest_cluster
arma::uvec nearest_cluster(arma::mat& data, arma::mat& centres);
RcppExport SEXP lowmemtkmeans_nearest_cluster(SEXP dataSEXP, SEXP centresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type centres(centresSEXP);
    rcpp_result_gen = Rcpp::wrap(nearest_cluster(data, centres));
    return rcpp_result_gen;
END_RCPP
}
