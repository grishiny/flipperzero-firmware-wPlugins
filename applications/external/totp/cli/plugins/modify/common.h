#pragma once
#include <stdlib.h>
#include "../../../types/token_info.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TOTP_CLI_COMMAND_ARG_NAME_PREFIX               "-n"
#define TOTP_CLI_COMMAND_ARG_ALGO_PREFIX               "-a"
#define TOTP_CLI_COMMAND_ARG_DIGITS_PREFIX             "-d"
#define TOTP_CLI_COMMAND_ARG_UNSECURE_PREFIX           "-u"
#define TOTP_CLI_COMMAND_ARG_DURATION_PREFIX           "-l"
#define TOTP_CLI_COMMAND_ARG_AUTOMATION_FEATURE_PREFIX "-b"
#define TOTP_CLI_COMMAND_ARG_SECRET_ENCODING_PREFIX    "-e"
#define TOTP_CLI_COMMAND_ARG_TYPE_PREFIX               "-t"
#define TOTP_CLI_COMMAND_ARG_COUNTER_PREFIX            "-i"

/**
 * @brief Tries to read token hashing algo
 * @param token_info token info to set parsed algo to if successfully read and parsed
 * @param arg argument to parse
 * @param args rest of arguments
 * @param[out] parsed will be set to \c true if token hashing algo sucecssfully read and parsed; \c false otherwise
 * @return \c true if \c arg represents token hashing algo argument; \c false otherwise
 */
bool totp_cli_try_read_algo(TokenInfo* token_info, FuriString* arg, FuriString* args, bool* parsed);

/**
 * @brief Tries to read token digits count
 * @param token_info token info to set parsed digits count to if successfully read and parsed
 * @param arg argument to parse
 * @param args rest of arguments
 * @param[out] parsed will be set to \c true if token digits count sucecssfully read and parsed; \c false otherwise
 * @return \c true if \c arg represents token digits count argument; \c false otherwise
 */
bool totp_cli_try_read_digits(
    TokenInfo* token_info,
    const FuriString* arg,
    FuriString* args,
    bool* parsed);

/**
 * @brief Tries to read token duration
 * @param token_info token info to set parsed duration to if successfully read and parsed
 * @param arg argument to parse
 * @param args rest of arguments
 * @param[out] parsed will be set to \c true if token duration sucecssfully read and parsed; \c false otherwise
 * @return \c true if \c arg represents token duration argument; \c false otherwise
 */
bool totp_cli_try_read_duration(
    TokenInfo* token_info,
    const FuriString* arg,
    FuriString* args,
    bool* parsed);

/**
 * @brief Tries to read token automation features
 * @param token_info token info to set parsed automation features to if successfully read and parsed
 * @param arg argument to parse
 * @param args rest of arguments
 * @param[out] parsed will be set to \c true if token automation features sucecssfully read and parsed; \c false otherwise
 * @return \c true if \c arg represents token automation features argument; \c false otherwise
 */
bool totp_cli_try_read_automation_features(
    TokenInfo* token_info,
    FuriString* arg,
    FuriString* args,
    bool* parsed);

/**
 * @brief Tries to read unsecure flag
 * @param arg argument to parse
 * @param[out] parsed will be set to \c true if unsecure flag sucecssfully read and parsed; \c false otherwise
 * @param[out] unsecure_flag will be set to parsed unsecure flag state if read and parsed successfully
 * @return \c true if \c arg represents unsecure flag argument; \c false otherwise
 */
bool totp_cli_try_read_unsecure_flag(const FuriString* arg, bool* parsed, bool* unsecure_flag);

/**
 * @brief Tries to read plain token secret encoding
 * @param arg argument to parse
 * @param args rest of arguments
 * @param[out] parsed will be set to \c true if plain token secret encoding sucecssfully read and parsed; \c false otherwise
 * @param[out] secret_encoding will be set to parsed plain token secret encoding if read and parsed successfully
 * @return \c true if \c arg represents plain token secret encoding argument; \c false otherwise
 */
bool totp_cli_try_read_plain_token_secret_encoding(
    FuriString* arg,
    FuriString* args,
    bool* parsed,
    PlainTokenSecretEncoding* secret_encoding);

/**
 * @brief Tries to read token type
 * @param token_info token info to set parsed token type to if successfully read and parsed
 * @param arg argument to parse
 * @param args rest of arguments
 * @param parsed will be set to \c true if token type sucecssfully read and parsed; \c false otherwise
 * @return \c true if \c arg represents token type argument; \c false otherwise
 */
bool totp_cli_try_read_token_type(
    TokenInfo* token_info,
    FuriString* arg,
    FuriString* args,
    bool* parsed);

/**
 * @brief Tries to read token counter
 * @param token_info token info to set parsed token counter to if successfully read and parsed
 * @param arg argument to parse
 * @param args rest of arguments
 * @param parsed will be set to \c true if token counter sucecssfully read and parsed; \c false otherwise
 * @return \c true if \c arg represents token counter argument; \c false otherwise
 */
bool totp_cli_try_read_token_counter(
    TokenInfo* token_info,
    FuriString* arg,
    FuriString* args,
    bool* parsed);

#ifdef __cplusplus
}
#endif
