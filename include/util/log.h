/*
 * =====================================================================================
 *
 *    Description:  Functions for logging messages to the console, with colours.
 *
 * =====================================================================================
 */

#ifndef UTIL_LOG_H
#define UTIL_LOG_H


/* #####   HEADER FILE INCLUDES   ################################################### */
#include <stdio.h>

/* #####   MACROS  ################################################################# */
#if defined(LINUX)
#define NONE "\e[0m"
#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[94m"
#define MAGENTA "\e[95m"
#define LIGHT_GREEN "\e[96m"
#endif

#if defined(_WIN32)
#define NONE ""
#define RED ""
#define GREEN ""
#define YELLOW ""
#define BLUE ""
#define MAGENTA ""
#define LIGHT_GREEN ""
#endif

/* #####   FUNCTION DEFINITIONS  -  LOCAL TO THIS SOURCE FILE   ##################### */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  L - Log
 *  Description:  Log a string(message)to the console.
 * =====================================================================================
 */
void L(const char* message)
{
    printf("%sLog: %s%s%s\n", GREEN, LIGHT_GREEN, message, NONE);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LI - Log Integer
 *  Description:  Log a integer(value)to the console.
 * =====================================================================================
 */
void LI(int value)
{
    printf("%sLog: %s%i%s\n", GREEN, LIGHT_GREEN, value, NONE);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LSI - Log String Integer
 *  Description:  Log a string(message) and an integer(value)to the console.
 * =====================================================================================
 */
void LSI(const char* message, int value)
{
    printf("%sLog: %s%s%i%s\n", GREEN, LIGHT_GREEN, message, value, NONE);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LSS - Log String String
 *  Description:  Log a string(message) and another string(value)to the console.
 * =====================================================================================
 */
void LSS(const char* message, const char* value)
{
    printf("%sLog: %s%s - %s %s\n", GREEN, LIGHT_GREEN, message, value, NONE);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LE - Log Error
 *  Description:  Log a error string(message) and another string(value)to the console.
 * =====================================================================================
 */
void LE(const char* message, const char* value)
{
    printf("%sError: %s%s - %s %s\n", RED, MAGENTA, message, value, NONE);
}

#endif