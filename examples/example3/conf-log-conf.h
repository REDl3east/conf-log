#ifndef CONF_LOG_CONF_H
#define CONF_LOG_CONF_H

#ifndef NDEBUG
  #define CONF_LOG_LEVEL CONF_LOG_TRACE
#else
  #define CONF_LOG_LEVEL CONF_LOG_WARN
#endif

#define CONF_LOG_PREFIX  ""
#define CONF_LOG_POSTFIX "\n"

#ifndef NDEBUG
  #define CONF_LOG_TIME_INCLUDE
  #define CONF_LOG_TIME_INDEX    0
  #define CONF_LOG_TIME_PREFIX   "["
  #define CONF_LOG_TIME_POSTFIX  "] "
  #define CONF_LOG_TIME_STYLE    "%Y-%m-%d %I:%M:%S"
  #define CONF_LOG_TIME_MAX_SIZE 32
  #define CONF_LOG_TIME_COLOR    CONF_LOG_WHITE
  #define CONF_LOG_TIME_ATTR     CONF_LOG_REGULAR
#endif

#define CONF_LOG_TAG_INCLUDE
#define CONF_LOG_TAG_INDEX 1

#define CONF_LOG_TAG_TRACE_PREFIX  "["
#define CONF_LOG_TAG_TRACE_POSTFIX "] "
#define CONF_LOG_TAG_TRACE_TEXT    "TRACE"
#ifndef NDEBUG
  #define CONF_LOG_TAG_TRACE_COLOR CONF_LOG_WHITE
  #define CONF_LOG_TAG_TRACE_ATTR  CONF_LOG_REGULAR
#endif

#define CONF_LOG_TAG_DEBUG_PREFIX  "["
#define CONF_LOG_TAG_DEBUG_POSTFIX "] "
#define CONF_LOG_TAG_DEBUG_TEXT    "DEBUG"
#ifndef NDEBUG
  #define CONF_LOG_TAG_DEBUG_COLOR CONF_LOG_BLUE
  #define CONF_LOG_TAG_DEBUG_ATTR  CONF_LOG_REGULAR
#endif

#define CONF_LOG_TAG_INFO_PREFIX  "["
#define CONF_LOG_TAG_INFO_POSTFIX "]  "
#define CONF_LOG_TAG_INFO_TEXT    "INFO"
#ifndef NDEBUG
  #define CONF_LOG_TAG_INFO_COLOR CONF_LOG_GREEN
  #define CONF_LOG_TAG_INFO_ATTR  CONF_LOG_REGULAR
#endif

#define CONF_LOG_TAG_WARN_PREFIX  "["
#define CONF_LOG_TAG_WARN_POSTFIX "]  "
#define CONF_LOG_TAG_WARN_TEXT    "WARN"
#ifndef NDEBUG
  #define CONF_LOG_TAG_WARN_COLOR CONF_LOG_YELLOW
  #define CONF_LOG_TAG_WARN_ATTR  CONF_LOG_REGULAR
#endif

#define CONF_LOG_TAG_ERROR_PREFIX  "["
#define CONF_LOG_TAG_ERROR_POSTFIX "] "
#define CONF_LOG_TAG_ERROR_TEXT    "ERROR"
#ifndef NDEBUG
  #define CONF_LOG_TAG_ERROR_COLOR CONF_LOG_RED
  #define CONF_LOG_TAG_ERROR_ATTR  CONF_LOG_REGULAR
#endif

#define CONF_LOG_TAG_FATAL_PREFIX  "["
#define CONF_LOG_TAG_FATAL_POSTFIX "] "
#define CONF_LOG_TAG_FATAL_TEXT    "FATAL"
#ifndef NDEBUG
  #define CONF_LOG_TAG_FATAL_COLOR CONF_LOG_PURPLE
  #define CONF_LOG_TAG_FATAL_ATTR  CONF_LOG_REGULAR
#endif

#define CONF_LOG_MSG_INCLUDE
#define CONF_LOG_MSG_INDEX   2
#define CONF_LOG_MSG_PREFIX  ""
#define CONF_LOG_MSG_POSTFIX ""
#ifndef NDEBUG
  #define CONF_LOG_MSG_COLOR CONF_LOG_BLUE
  #define CONF_LOG_MSG_ATTR  CONF_LOG_REGULAR
#endif

#ifndef NDEBUG

  #define CONF_LOG_TAG_TRACE_PRINT_FUNC(fmt, args...) \
    printf(fmt, ##args)

  #define CONF_LOG_TAG_DEBUG_PRINT_FUNC(fmt, args...) \
    printf(fmt, ##args)

  #define CONF_LOG_TAG_INFO_PRINT_FUNC(fmt, args...) \
    printf(fmt, ##args)

  #define CONF_LOG_TAG_WARN_PRINT_FUNC(fmt, args...) \
    fprintf(stderr, fmt, ##args)

  #define CONF_LOG_TAG_ERROR_PRINT_FUNC(fmt, args...) \
    fprintf(stderr, fmt, ##args)

  #define CONF_LOG_TAG_FATAL_PRINT_FUNC(fmt, args...) \
    fprintf(stderr, fmt, ##args)

#else

  #define CONF_LOG_TAG_TRACE_PRINT_FUNC(fmt, args...) \
    syslog(LOG_DEBUG, fmt, ##args)

  #define CONF_LOG_TAG_DEBUG_PRINT_FUNC(fmt, args...) \
    syslog(LOG_DEBUG, fmt, ##args)

  #define CONF_LOG_TAG_INFO_PRINT_FUNC(fmt, args...) \
    syslog(LOG_INFO, fmt, ##args)

  #define CONF_LOG_TAG_WARN_PRINT_FUNC(fmt, args...) \
    syslog(LOG_WARNING, fmt, ##args)

  #define CONF_LOG_TAG_ERROR_PRINT_FUNC(fmt, args...) \
    syslog(LOG_ERR, fmt, ##args)

  #define CONF_LOG_TAG_FATAL_PRINT_FUNC(fmt, args...) \
    syslog(LOG_CRIT, fmt, ##args)

#endif

#ifdef NDEBUG
  #include <syslog.h>
#endif

#include "conf-log.h"

#endif