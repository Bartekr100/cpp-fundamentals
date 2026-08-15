#pragma once
#include <cstdint>
#include <string_view>

enum class ErrorCode : uint8_t {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

[[nodiscard]] std::string_view getErrorMessage(const ErrorCode code);
[[nodiscard]] bool doPasswordsMatch(const std::string_view& input_pass, const std::string_view& reference_pass);

[[nodiscard]] ErrorCode checkPasswordRules(const std::string_view& password);

[[nodiscard]] ErrorCode checkPassword(const std::string_view& password, const std::string_view& repeatedPassword);