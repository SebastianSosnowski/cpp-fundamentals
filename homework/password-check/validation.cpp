#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode code) {
    std::string code_str;
    switch (code) {
    case ErrorCode::Ok:
        code_str = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        code_str = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        code_str = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        code_str = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        code_str = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        code_str = "Passwords do not match";
        break;
    default:
        code_str = "Ok";
    }
    return code_str;
}

bool doPasswordsMatch(std::string pwd1, std::string pwd2) {
    return pwd1 == pwd2;
}
ErrorCode checkPasswordRules(std::string pwd) {
    static std::random_device rd;
    static std::mt19937 gen(rd());

    static const ErrorCode values[] = {
        ErrorCode::Ok,
        ErrorCode::PasswordNeedsAtLeastNineCharacters,
        ErrorCode::PasswordNeedsAtLeastOneNumber,
        ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter,
        ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter};

    std::uniform_int_distribution<size_t> dist(0, std::size(values) - 1);
    return values[dist(gen)];
}
ErrorCode checkPassword(std::string pwd1, std::string pwd2) {
    ErrorCode res;
    if (doPasswordsMatch(pwd1, pwd2)) {
        res = checkPasswordRules(pwd1);
    } else {
        res = ErrorCode::PasswordsDoNotMatch;
    }
    return res;
}