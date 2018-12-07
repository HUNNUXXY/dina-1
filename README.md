
<!-- README.md is generated from README.Rmd. Please edit that file -->

[![Build
Status](https://travis-ci.org/tmsalab/dina.svg)](https://travis-ci.org/tmsalab/dina)
[![Package-License](http://img.shields.io/badge/license-GPL%20\(%3E=2\)-brightgreen.svg?style=flat)](http://www.gnu.org/licenses/gpl-2.0.html)
[![CRAN](http://www.r-pkg.org/badges/version/dina)](https://cran.r-project.org/package=dina)
[![Downloads](http://cranlogs.r-pkg.org/badges/dina?color=brightgreen)](http://www.r-pkg.org/pkg/dina)

# `dina` R package

Estimate the Deterministic Input, Noisy And Gate (DINA) cognitive
diagnostic model parameters using the Gibbs sampler described by
Culpepper (2015) DOI: 10.3102/1076998615595403

## Installation

You can install `dina` from CRAN using:

``` r
install.packages("dina")
```

Or, you can be on the cutting-edge development version on GitHub using:

``` r
if(!requireNamespace("devtools")) install.packages("devtools")
devtools::install_github("tmsalab/dina")
```

## Usage

To use `dina`, load the package using:

``` r
library("dina")
```

DINA CDM can then be estimated using:

``` r
dina_model = dina(<data>, <q>)
```

## Authors

Steven Andrew Culpepper and James Joseph Balamuta

## License

GPL (\>= 2)
