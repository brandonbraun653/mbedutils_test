/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "thread_expect.hpp"

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& Task$ctor()
{
    return Task$ctor(1);
}
MockExpectedCall& Task$ctor(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::Task");
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& Task$dtor(CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    return Task$dtor(1, __object__);
}
MockExpectedCall& Task$dtor(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::~Task");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& operator=(CppUMockGen::Parameter<const mb::thread::Task*> __object__, Task & other, Task & __return__)
{
    return operator=(1, __object__, other, __return__);
}
MockExpectedCall& operator=(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__, Task & other, Task & __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::operator=");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    __expectedCall__.withOutputParameterOfTypeReturning("Task", "other", &other);
    __expectedCall__.andReturnValue(static_cast<void*>(&__return__));
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& Task$ctor(CppUMockGen::Parameter<const Task &> _unnamedArg0)
{
    return Task$ctor(1, _unnamedArg0);
}
MockExpectedCall& Task$ctor(unsigned int __numCalls__, CppUMockGen::Parameter<const Task &> _unnamedArg0)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::Task");
    if(_unnamedArg0.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("Task", "_unnamedArg0", &_unnamedArg0.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& operator=(CppUMockGen::Parameter<const mb::thread::Task*> __object__, CppUMockGen::Parameter<const Task &> _unnamedArg0, Task & __return__)
{
    return operator=(1, __object__, _unnamedArg0, __return__);
}
MockExpectedCall& operator=(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__, CppUMockGen::Parameter<const Task &> _unnamedArg0, Task & __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::operator=");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    if(_unnamedArg0.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("Task", "_unnamedArg0", &_unnamedArg0.getValue()); }
    __expectedCall__.andReturnValue(static_cast<void*>(&__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& start(CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    return start(1, __object__);
}
MockExpectedCall& start(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::start");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& kill(CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    return kill(1, __object__);
}
MockExpectedCall& kill(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::kill");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& join(CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    return join(1, __object__);
}
MockExpectedCall& join(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::join");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& joinable(CppUMockGen::Parameter<const mb::thread::Task*> __object__, bool __return__)
{
    return joinable(1, __object__, __return__);
}
MockExpectedCall& joinable(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__, bool __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::joinable");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    __expectedCall__.andReturnValue(__return__);
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& id(CppUMockGen::Parameter<const mb::thread::Task*> __object__, TaskId __return__)
{
    return id(1, __object__, __return__);
}
MockExpectedCall& id(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__, TaskId __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::id");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    __expectedCall__.andReturnValue(static_cast<unsigned long>(__return__));
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& name(CppUMockGen::Parameter<const mb::thread::Task*> __object__, TaskName &__return__)
{
    return name(1, __object__, __return__);
}
MockExpectedCall& name(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__, TaskName &__return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::name");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    __expectedCall__.andReturnValue(static_cast<const void*>(&__return__));
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace Task$ {
MockExpectedCall& implementation(CppUMockGen::Parameter<const mb::thread::Task*> __object__, TaskHandle __return__)
{
    return implementation(1, __object__, __return__);
}
MockExpectedCall& implementation(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::thread::Task*> __object__, TaskHandle __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::Task::implementation");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<mb::thread::Task*>(__object__.getValue())); }
    __expectedCall__.andReturnValue(static_cast<void*>(__return__));
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ {
MockExpectedCall& create(CppUMockGen::Parameter<const Task::Config &> cfg, ::mb::thread::Task & __return__)
{
    return create(1, cfg, __return__);
}
MockExpectedCall& create(unsigned int __numCalls__, CppUMockGen::Parameter<const Task::Config &> cfg, ::mb::thread::Task & __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::create");
    if(cfg.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("Task::Config", "cfg", &cfg.getValue()); }
    __expectedCall__.andReturnValue(static_cast<void*>(&__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace thread$ {
MockExpectedCall& driver_setup(CppUMockGen::Parameter<const Internal::ModuleConfig &> cfg)
{
    return driver_setup(1, cfg);
}
MockExpectedCall& driver_setup(unsigned int __numCalls__, CppUMockGen::Parameter<const Internal::ModuleConfig &> cfg)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::driver_setup");
    if(cfg.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("Internal::ModuleConfig", "cfg", &cfg.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace thread$ {
MockExpectedCall& driver_teardown()
{
    return driver_teardown(1);
}
MockExpectedCall& driver_teardown(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::driver_teardown");
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace thread$ {
MockExpectedCall& startScheduler()
{
    return startScheduler(1);
}
MockExpectedCall& startScheduler(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::startScheduler");
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace thread$ {
MockExpectedCall& sendMessage(CppUMockGen::Parameter<const TaskId> id, Message & msg, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    return sendMessage(1, id, msg, timeout, __return__);
}
MockExpectedCall& sendMessage(unsigned int __numCalls__, CppUMockGen::Parameter<const TaskId> id, Message & msg, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::sendMessage");
    if(id.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("id", id.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("Message", "msg", &msg);
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& set_name(CppUMockGen::Parameter<const char *> name)
{
    return set_name(1, name);
}
MockExpectedCall& set_name(unsigned int __numCalls__, CppUMockGen::Parameter<const char *> name)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::set_name");
    if(name.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("name", name.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& get_name(TaskName & __return__)
{
    return get_name(1, __return__);
}
MockExpectedCall& get_name(unsigned int __numCalls__, TaskName & __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::get_name");
    __expectedCall__.andReturnValue(static_cast<void*>(&__return__));
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& sleep_for(CppUMockGen::Parameter<const size_t> timeout)
{
    return sleep_for(1, timeout);
}
MockExpectedCall& sleep_for(unsigned int __numCalls__, CppUMockGen::Parameter<const size_t> timeout)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::sleep_for");
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& sleep_until(CppUMockGen::Parameter<const size_t> wakeup)
{
    return sleep_until(1, wakeup);
}
MockExpectedCall& sleep_until(unsigned int __numCalls__, CppUMockGen::Parameter<const size_t> wakeup)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::sleep_until");
    if(wakeup.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("wakeup", wakeup.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& yield()
{
    return yield(1);
}
MockExpectedCall& yield(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::yield");
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& suspend()
{
    return suspend(1);
}
MockExpectedCall& suspend(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::suspend");
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& id(TaskId __return__)
{
    return id(1, __return__);
}
MockExpectedCall& id(unsigned int __numCalls__, TaskId __return__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::id");
    __expectedCall__.andReturnValue(static_cast<unsigned long>(__return__));
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& awaitMessage(Message & msg, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    return awaitMessage(1, msg, timeout, __return__);
}
MockExpectedCall& awaitMessage(unsigned int __numCalls__, Message & msg, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::awaitMessage");
    __expectedCall__.withOutputParameterOfTypeReturning("Message", "msg", &msg);
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

namespace expect { namespace mb$ { namespace thread$ { namespace this_thread$ {
MockExpectedCall& awaitMessage(Message & msg, MessagePredicate & predicate, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    return awaitMessage(1, msg, predicate, timeout, __return__);
}
MockExpectedCall& awaitMessage(unsigned int __numCalls__, Message & msg, MessagePredicate & predicate, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::thread::this_thread::awaitMessage");
    __expectedCall__.withOutputParameterOfTypeReturning("Message", "msg", &msg);
    __expectedCall__.withOutputParameterOfTypeReturning("MessagePredicate", "predicate", &predicate);
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } }

