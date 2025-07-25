\name{VARfit-methods}
\alias{coef.VARfit}
\alias{print.VARfit}
\alias{residuals.VARfit}

\title{
Methods for Objects of Class \code{VARfit}
}
\description{
\code{residuals.VARfit()} returns the residuals, and \code{coef.VARfit()} returns the coefficients of a fitted VAR model of class \code{VARfit}. \code{print.VARfit()} prints the estimated model parameters.
}

\usage{
\method{coef}{VARfit}(object, \dots)
\method{print}{VARfit}(x, \dots)
\method{residuals}{VARfit}(object, \dots)
}


\arguments{
  \item{x, object}{
    A fitted VAR model of class \code{VARfit}, as returned by \code{\link{VARfit}}.
  }
  \item{\dots}{
    Additional arguments passed to the methods.
  }
}

\value{
  \code{coef.VARfit}: A numeric matrix containing the estimated coefficients of the VAR model, including intercepts and lagged autoregressive terms.

  \code{print.VARfit}: No return value. Called for its side effects (printing model information to the console).

  \code{residuals.VARfit}: A numeric matrix of residuals from the fitted VAR model. Each column corresponds to one of the time series in the system.
}

\seealso{\link{VARfit}} 