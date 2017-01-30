/* -*- Mode:C++; c-file-style:"google"; indent-tabs-mode:nil; -*- */

#ifndef NDN_VSYNC_LOGGING_HPP_
#define NDN_VSYNC_LOGGING_HPP_

#ifdef ENABLE_NS3_LOGGING

#include "ns3/log.h"

NS_LOG_COMPONENT_DEFINE("ndn.vsync.Node");

#define VSYNC_LOG_TRACE(expr) NS_LOG_LOGIC(expr)
#define VSYNC_LOG_INFO(expr) NS_LOG_INFO(expr)
#define VSYNC_LOG_DEBUG(expr) NS_LOG_DEBUG(expr)
#define VSYNC_LOG_WARN(expr) NS_LOG_WARN(expr)
#define VSYNC_LOG_ERROR(expr) NS_LOG_ERROR(expr)

#else

#include <ndn-cxx/util/logger.hpp>

NDN_LOG_INIT(ndn.vsync.Node);

#define VSYNC_LOG_TRACE(expr) NDN_LOG_TRACE(expr)
#define VSYNC_LOG_INFO(expr) NDN_LOG_INFO(expr)
#define VSYNC_LOG_DEBUG(expr) NDN_LOG_DEBUG(expr)
#define VSYNC_LOG_WARN(expr) NDN_LOG_WARN(expr)
#define VSYNC_LOG_ERROR(expr) NDN_LOG_ERROR(expr)

#endif

#endif  // NDN_VSYNC_LOGGING_HPP_