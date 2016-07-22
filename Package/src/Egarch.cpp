#include "MSgarch.h"

//============================================================================//
//============================================================================//
//================================== eGARCH ==================================//
//============================================================================//
//============================================================================//
RCPP_MODULE(eGARCH){  
  
  // eGARCH-norm-symmetric
  class_<eGARCH_norm_sym>("eGARCH_norm_sym")  
	.constructor()
	.field( "name",        &eGARCH_norm_sym ::name )
	.field( "theta0",      &eGARCH_norm_sym ::theta0 )
	.field( "Sigma0",      &eGARCH_norm_sym ::Sigma0 )
	.field( "label",       &eGARCH_norm_sym ::label )
	.field( "lower",       &eGARCH_norm_sym ::lower )
	.field( "upper",       &eGARCH_norm_sym ::upper )
	.field( "ineq_lb",     &eGARCH_norm_sym ::ineq_lb )
	.field( "ineq_ub",     &eGARCH_norm_sym ::ineq_ub )
	.field( "NbParams",    &eGARCH_norm_sym ::NbParams )
	.field( "NbParamsModel",&eGARCH_norm_sym::NbParamsModel)
	.method( "f_sim",      &eGARCH_norm_sym ::f_sim )
	.method( "f_pdf",      &eGARCH_norm_sym ::f_pdf )
	.method( "f_cdf",      &eGARCH_norm_sym ::f_cdf )
	.method( "f_rnd",      &eGARCH_norm_sym ::f_rnd )
	.method( "calc_ht",    &eGARCH_norm_sym ::calc_ht )
	.method( "eval_model", &eGARCH_norm_sym ::eval_model )
	.method( "ineq_func",  &eGARCH_norm_sym ::ineq_func )
	.method( "f_unc_vol",  &eGARCH_norm_sym ::f_unc_vol) 
  ;
  // eGARCH-std-symmetric
  class_<eGARCH_std_sym>("eGARCH_std_sym")  
    .constructor()
    .field( "name",        &eGARCH_std_sym ::name )
    .field( "theta0",      &eGARCH_std_sym ::theta0 )
    .field( "Sigma0",      &eGARCH_std_sym ::Sigma0 )
    .field( "label",       &eGARCH_std_sym ::label )
    .field( "lower",       &eGARCH_std_sym ::lower )
    .field( "upper",       &eGARCH_std_sym ::upper )
    .field( "ineq_lb",     &eGARCH_std_sym ::ineq_lb )
    .field( "ineq_ub",     &eGARCH_std_sym ::ineq_ub )
    .field( "NbParams",    &eGARCH_std_sym ::NbParams )
	.field( "NbParamsModel",&eGARCH_std_sym::NbParamsModel)
    .method( "f_sim",      &eGARCH_std_sym ::f_sim )
    .method( "f_pdf",      &eGARCH_std_sym ::f_pdf )
    .method( "f_cdf",      &eGARCH_std_sym ::f_cdf )
    .method( "f_rnd",      &eGARCH_std_sym ::f_rnd )
    .method( "calc_ht",    &eGARCH_std_sym ::calc_ht )
    .method( "eval_model", &eGARCH_std_sym ::eval_model )
    .method( "ineq_func",  &eGARCH_std_sym ::ineq_func )
    .method( "f_unc_vol",  &eGARCH_std_sym ::f_unc_vol)
  ;
  // eGARCH-ged-symmetric
  class_<eGARCH_ged_sym>("eGARCH_ged_sym")  
    .constructor()
    .field( "name",        &eGARCH_ged_sym ::name )
    .field( "theta0",      &eGARCH_ged_sym ::theta0 )
    .field( "Sigma0",      &eGARCH_ged_sym ::Sigma0 )
    .field( "label",       &eGARCH_ged_sym ::label )
    .field( "lower",       &eGARCH_ged_sym ::lower )
    .field( "upper",       &eGARCH_ged_sym ::upper )
    .field( "ineq_lb",     &eGARCH_ged_sym ::ineq_lb )
    .field( "ineq_ub",     &eGARCH_ged_sym ::ineq_ub )
    .field( "NbParams",    &eGARCH_ged_sym ::NbParams )
	.field( "NbParamsModel",&eGARCH_ged_sym::NbParamsModel)
    .method( "f_sim",      &eGARCH_ged_sym ::f_sim )
    .method( "f_pdf",      &eGARCH_ged_sym ::f_pdf )
    .method( "f_cdf",      &eGARCH_ged_sym ::f_cdf )
    .method( "f_rnd",      &eGARCH_ged_sym ::f_rnd )
    .method( "calc_ht",    &eGARCH_ged_sym ::calc_ht )
    .method( "eval_model", &eGARCH_ged_sym ::eval_model )
    .method( "ineq_func",  &eGARCH_ged_sym ::ineq_func )
    .method( "f_unc_vol",  &eGARCH_ged_sym ::f_unc_vol)
  ;
  
   
  // eGARCH-norm-skew
  class_<eGARCH_norm_skew>("eGARCH_norm_skew")  
	.constructor()
	.field( "name",        &eGARCH_norm_skew ::name )
	.field( "theta0",      &eGARCH_norm_skew ::theta0 )
	.field( "Sigma0",      &eGARCH_norm_skew ::Sigma0 )
	.field( "label",       &eGARCH_norm_skew ::label )
	.field( "lower",       &eGARCH_norm_skew ::lower )
	.field( "upper",       &eGARCH_norm_skew ::upper )
	.field( "ineq_lb",     &eGARCH_norm_skew ::ineq_lb )
	.field( "ineq_ub",     &eGARCH_norm_skew ::ineq_ub )
	.field( "NbParams",    &eGARCH_norm_skew ::NbParams )
	.field( "NbParamsModel",&eGARCH_norm_skew::NbParamsModel)
	.method( "f_sim",      &eGARCH_norm_skew ::f_sim )
	.method( "f_pdf",      &eGARCH_norm_skew ::f_pdf )
	.method( "f_cdf",      &eGARCH_norm_skew ::f_cdf )
	.method( "f_rnd",      &eGARCH_norm_skew ::f_rnd )
	.method( "calc_ht",    &eGARCH_norm_skew ::calc_ht )
	.method( "eval_model", &eGARCH_norm_skew ::eval_model )
	.method( "ineq_func",  &eGARCH_norm_skew ::ineq_func )
	.method( "f_unc_vol",  &eGARCH_norm_skew ::f_unc_vol) 
  ;
  // eGARCH-std-skew
  class_<eGARCH_std_skew>("eGARCH_std_skew")  
    .constructor()
    .field( "name",        &eGARCH_std_skew ::name )
    .field( "theta0",      &eGARCH_std_skew ::theta0 )
    .field( "Sigma0",      &eGARCH_std_skew ::Sigma0 )
    .field( "label",       &eGARCH_std_skew ::label )
    .field( "lower",       &eGARCH_std_skew ::lower )
    .field( "upper",       &eGARCH_std_skew ::upper )
    .field( "ineq_lb",     &eGARCH_std_skew ::ineq_lb )
    .field( "ineq_ub",     &eGARCH_std_skew ::ineq_ub )
    .field( "NbParams",    &eGARCH_std_skew ::NbParams )
	.field( "NbParamsModel",&eGARCH_std_skew::NbParamsModel)
    .method( "f_sim",      &eGARCH_std_skew ::f_sim )
    .method( "f_pdf",      &eGARCH_std_skew ::f_pdf )
    .method( "f_cdf",      &eGARCH_std_skew ::f_cdf )
    .method( "f_rnd",      &eGARCH_std_skew ::f_rnd )
    .method( "calc_ht",    &eGARCH_std_skew ::calc_ht )
    .method( "eval_model", &eGARCH_std_skew ::eval_model )
    .method( "ineq_func",  &eGARCH_std_skew ::ineq_func )
    .method( "f_unc_vol",  &eGARCH_std_skew ::f_unc_vol)
  ;
  // eGARCH-ged-skew
  class_<eGARCH_ged_skew>("eGARCH_ged_skew")  
    .constructor()
    .field( "name",        &eGARCH_ged_skew ::name )
    .field( "theta0",      &eGARCH_ged_skew ::theta0 )
    .field( "Sigma0",      &eGARCH_ged_skew ::Sigma0 )
    .field( "label",       &eGARCH_ged_skew ::label )
    .field( "lower",       &eGARCH_ged_skew ::lower )
    .field( "upper",       &eGARCH_ged_skew ::upper )
    .field( "ineq_lb",     &eGARCH_ged_skew ::ineq_lb )
    .field( "ineq_ub",     &eGARCH_ged_skew ::ineq_ub )
    .field( "NbParams",    &eGARCH_ged_skew ::NbParams )
	.field( "NbParamsModel",&eGARCH_ged_skew::NbParamsModel)
    .method( "f_sim",      &eGARCH_ged_skew ::f_sim )
    .method( "f_pdf",      &eGARCH_ged_skew ::f_pdf )
    .method( "f_cdf",      &eGARCH_ged_skew ::f_cdf )
    .method( "f_rnd",      &eGARCH_ged_skew ::f_rnd )
    .method( "calc_ht",    &eGARCH_ged_skew ::calc_ht )
    .method( "eval_model", &eGARCH_ged_skew ::eval_model )
    .method( "ineq_func",  &eGARCH_ged_skew ::ineq_func )
    .method( "f_unc_vol",  &eGARCH_ged_skew ::f_unc_vol)
  ;
}
