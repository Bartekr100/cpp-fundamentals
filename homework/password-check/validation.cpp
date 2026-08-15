#include "validation.hpp"
#include <algorithm>
#include <cctype>

std::string getErrorMessage(const ErrorCode code) {
    switch (code) {
    case ErrorCode::Ok:
        return "Ok";

    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password Needs At Least Nine Characters";

    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password Needs At Least One Number";

    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password Needs At Least One Special Character";

    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password Needs At Least One Upper case Letter";

    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords Do Not Match";
    default:
        return "Unknown Message";
    }
}

bool doPasswordsMatch(const std::string& input_pass, const std::string& reference_pass) {
    return input_pass == reference_pass;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
     if (std::none_of(password.begin(), password.end(), [](const unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
}
