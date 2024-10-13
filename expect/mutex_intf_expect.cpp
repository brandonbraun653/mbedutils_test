/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "mutex_intf_expect.hpp"

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& initMutexDriver()
{
    return initMutexDriver(1);
}
MockExpectedCall& initMutexDriver(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::initMutexDriver");
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& createMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex, bool __return__)
{
    return createMutex(1, mutex, __return__);
}
MockExpectedCall& createMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::createMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& destroyMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex)
{
    return destroyMutex(1, mutex);
}
MockExpectedCall& destroyMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::destroyMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& allocateMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex, bool __return__)
{
    return allocateMutex(1, mutex, __return__);
}
MockExpectedCall& allocateMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::allocateMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& deallocateMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex)
{
    return deallocateMutex(1, mutex);
}
MockExpectedCall& deallocateMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t &> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::deallocateMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& lockMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex)
{
    return lockMutex(1, mutex);
}
MockExpectedCall& lockMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::lockMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& tryLockMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex, bool __return__)
{
    return tryLockMutex(1, mutex, __return__);
}
MockExpectedCall& tryLockMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::tryLockMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& tryLockMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    return tryLockMutex(1, mutex, timeout, __return__);
}
MockExpectedCall& tryLockMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::tryLockMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& unlockMutex(CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex)
{
    return unlockMutex(1, mutex);
}
MockExpectedCall& unlockMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_mutex_t> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::unlockMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& createRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t &> mutex, bool __return__)
{
    return createRecursiveMutex(1, mutex, __return__);
}
MockExpectedCall& createRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t &> mutex, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::createRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& destroyRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t &> mutex)
{
    return destroyRecursiveMutex(1, mutex);
}
MockExpectedCall& destroyRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t &> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::destroyRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& allocateRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t &> mutex, bool __return__)
{
    return allocateRecursiveMutex(1, mutex, __return__);
}
MockExpectedCall& allocateRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t &> mutex, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::allocateRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", &mutex.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& lockRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex)
{
    return lockRecursiveMutex(1, mutex);
}
MockExpectedCall& lockRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::lockRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& tryLockRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex, bool __return__)
{
    return tryLockRecursiveMutex(1, mutex, __return__);
}
MockExpectedCall& tryLockRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::tryLockRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& tryLockRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    return tryLockRecursiveMutex(1, mutex, timeout, __return__);
}
MockExpectedCall& tryLockRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::tryLockRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& unlockRecursiveMutex(CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex)
{
    return unlockRecursiveMutex(1, mutex);
}
MockExpectedCall& unlockRecursiveMutex(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_recursive_mutex_t> mutex)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::unlockRecursiveMutex");
    if(mutex.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("mutex", mutex.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

