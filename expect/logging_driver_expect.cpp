/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "logging_driver_expect.hpp"

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& initialize()
{
    return initialize(1);
}
MockExpectedCall& initialize(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::initialize");
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& setGlobalLogLevel(CppUMockGen::Parameter<const mb::logging::Level> level, mb::logging::ErrCode __return__)
{
    return setGlobalLogLevel(1, level, __return__);
}
MockExpectedCall& setGlobalLogLevel(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::logging::Level> level, mb::logging::ErrCode __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::setGlobalLogLevel");
    if(level.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withIntParameter("level", static_cast<int>(level.getValue())); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& registerSink(CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__)
{
    return registerSink(1, sink, __return__);
}
MockExpectedCall& registerSink(unsigned int __numCalls__, CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::registerSink");
    if(sink.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("sink", &sink.getValue()); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& removeSink(CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__)
{
    return removeSink(1, sink, __return__);
}
MockExpectedCall& removeSink(unsigned int __numCalls__, CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::removeSink");
    if(sink.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("sink", &sink.getValue()); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& setRootSink(CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__)
{
    return setRootSink(1, sink, __return__);
}
MockExpectedCall& setRootSink(unsigned int __numCalls__, CppUMockGen::Parameter<mb::logging::SinkHandle_rPtr &> sink, mb::logging::ErrCode __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::setRootSink");
    if(sink.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("sink", &sink.getValue()); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& getRootSink(mb::logging::SinkHandle_rPtr __return__)
{
    return getRootSink(1, __return__);
}
MockExpectedCall& getRootSink(unsigned int __numCalls__, mb::logging::SinkHandle_rPtr __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::getRootSink");
    __expectedCall__.andReturnValue(static_cast<void*>(__return__));
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& log(CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const void *const> msg, CppUMockGen::Parameter<const size_t> length, mb::logging::ErrCode __return__)
{
    return log(1, lvl, msg, length, __return__);
}
MockExpectedCall& log(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const void *const> msg, CppUMockGen::Parameter<const size_t> length, mb::logging::ErrCode __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::log");
    if(lvl.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withIntParameter("lvl", static_cast<int>(lvl.getValue())); }
    if(msg.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("msg", msg.getValue()); }
    if(length.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("length", length.getValue()); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace logging$ {
MockExpectedCall& flog(CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const char *const> file, CppUMockGen::Parameter<const size_t> line, CppUMockGen::Parameter<const char *> fmt, mb::logging::ErrCode __return__)
{
    return flog(1, lvl, file, line, fmt, __return__);
}
MockExpectedCall& flog(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::logging::Level> lvl, CppUMockGen::Parameter<const char *const> file, CppUMockGen::Parameter<const size_t> line, CppUMockGen::Parameter<const char *> fmt, mb::logging::ErrCode __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::logging::flog");
    if(lvl.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withIntParameter("lvl", static_cast<int>(lvl.getValue())); }
    if(file.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("file", file.getValue()); }
    if(line.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("line", line.getValue()); }
    if(fmt.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("fmt", fmt.getValue()); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

