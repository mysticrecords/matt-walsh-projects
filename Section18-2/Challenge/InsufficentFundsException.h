#ifndef _INSUFFICIENT_FUNDS_EXCEPTION_
#define _INSUFFICIENT_FUNDS_EXCEPTION_

#include <exception>

class InsufficentFundsException: public std::exception {
    public:
        InsufficentFundsException() noexcept = default;
        ~InsufficentFundsException() = default;
        virtual const char* what() const noexcept {
            return "Insufficient Funds Exception";
        }
};

#endif