#pragma once
#include <cstdint>
#include <string>

enum class ErrorCode : uint8_t {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(const ErrorCode code);
bool doPasswordsMatch(const std::string& input_pass, const std::string& reference_pass);


ErrorCode checkPasswordRules(const std::string& password);