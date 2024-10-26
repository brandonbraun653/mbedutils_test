/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include <CppUMockGen.hpp>

#include "../../../mbedutils/include/mbedutils/drivers/logging/logging_driver.hpp"

#include <CppUTestExt/MockSupport.h>

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& initialize();
MockExpectedCall& initialize(unsigned int __numCalls__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& setGlobalLogLevel(CppUMockGen::Parameter<const mb::logging::Level> level, mb::logging::ErrCode __return__);
MockExpectedCall& setGlobalLogLevel(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::logging::Level> level, mb::logging::ErrCode __return__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& registerSink(CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__);
MockExpectedCall& registerSink(unsigned int __numCalls__, CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& removeSink(CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__);
MockExpectedCall& removeSink(unsigned int __numCalls__, CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& setRootSink(CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__);
MockExpectedCall& setRootSink(unsigned int __numCalls__, CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& getRootSink(mb::logging::SinkHandle_rPtr __return__);
MockExpectedCall& getRootSink(unsigned int __numCalls__, mb::logging::SinkHandle_rPtr __return__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& log(CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const void *const> msg, CppUMockGen::Parameter<const size_t> length, mb::logging::ErrCode __return__);
MockExpectedCall& log(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const void *const> msg, CppUMockGen::Parameter<const size_t> length, mb::logging::ErrCode __return__);
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& flog(CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const char *const> file, CppUMockGen::Parameter<const size_t> line, CppUMockGen::Parameter<const char *> fmt, mb::logging::ErrCode __return__);
MockExpectedCall& flog(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const char *const> file, CppUMockGen::Parameter<const size_t> line, CppUMockGen::Parameter<const char *> fmt, mb::logging::ErrCode __return__);
} } }

