/**
 * Unit tests implementation.
 * @author Chen Weiguang
 * @version 0.3.2-pre
 */

#pragma once

#if defined(unix) || defined(__unix__) || defined(__unix)
#ifndef SPDLOG_ENABLE_SYSLOG
#define SPDLOG_ENABLE_SYSLOG
#endif
#endif

#include "spdlog_setup/conf.h"
