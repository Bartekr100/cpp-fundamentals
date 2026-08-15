#include "validation.hpp"
#include <algorithm>
#include <cctype>

std::string getErrorMessage(const ErrorCode code) {
    switch (code) {
    case ErrorCode::Ok:
        return "Ok";

    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";

    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";

    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";

    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";

    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";

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
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword) {
    if (!doPasswordsMatch(password, repeatedPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password);
}
