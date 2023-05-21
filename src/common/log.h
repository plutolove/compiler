#pragma once
#include "spdlog/spdlog.h"

#define DEBUG(fmt, args...) spdlog::debug(fmt, ##args)
#define INFO(fmt, args...) spdlog::info(fmt, ##args)
#define WARN(fmt, args...) spdlog::warn(fmt, ##args)
#define ERROR(fmt, args...) spdlog::error(fmt, ##args)