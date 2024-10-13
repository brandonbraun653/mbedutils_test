/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "smphr_intf_expect.hpp"

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& initSmphrDriver()
{
    return initSmphrDriver(1);
}
MockExpectedCall& initSmphrDriver(unsigned int __numCalls__)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::initSmphrDriver");
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& createSmphr(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, CppUMockGen::Parameter<const size_t> maxCount, CppUMockGen::Parameter<const size_t> initialCount, bool __return__)
{
    return createSmphr(1, s, maxCount, initialCount, __return__);
}
MockExpectedCall& createSmphr(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, CppUMockGen::Parameter<const size_t> maxCount, CppUMockGen::Parameter<const size_t> initialCount, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::createSmphr");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(maxCount.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("maxCount", maxCount.getValue()); }
    if(initialCount.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("initialCount", initialCount.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& destroySmphr(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    return destroySmphr(1, s);
}
MockExpectedCall& destroySmphr(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::destroySmphr");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& allocateSemaphore(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, CppUMockGen::Parameter<const size_t> maxCount, CppUMockGen::Parameter<const size_t> initialCount, bool __return__)
{
    return allocateSemaphore(1, s, maxCount, initialCount, __return__);
}
MockExpectedCall& allocateSemaphore(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, CppUMockGen::Parameter<const size_t> maxCount, CppUMockGen::Parameter<const size_t> initialCount, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::allocateSemaphore");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(maxCount.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("maxCount", maxCount.getValue()); }
    if(initialCount.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("initialCount", initialCount.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& deallocateSemaphore(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    return deallocateSemaphore(1, s);
}
MockExpectedCall& deallocateSemaphore(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::deallocateSemaphore");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& getSmphrAvailable(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, size_t __return__)
{
    return getSmphrAvailable(1, s, __return__);
}
MockExpectedCall& getSmphrAvailable(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, size_t __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::getSmphrAvailable");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    __expectedCall__.andReturnValue(static_cast<unsigned long>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& releaseSmphr(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    return releaseSmphr(1, s);
}
MockExpectedCall& releaseSmphr(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::releaseSmphr");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& releaseSmphrFromISR(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    return releaseSmphrFromISR(1, s);
}
MockExpectedCall& releaseSmphrFromISR(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::releaseSmphrFromISR");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& acquireSmphr(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    return acquireSmphr(1, s);
}
MockExpectedCall& acquireSmphr(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::acquireSmphr");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& tryAcquireSmphr(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, bool __return__)
{
    return tryAcquireSmphr(1, s, __return__);
}
MockExpectedCall& tryAcquireSmphr(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::tryAcquireSmphr");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }

namespace expect { namespace mb$ { namespace osal$ {
MockExpectedCall& tryAcquireSmphr(CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    return tryAcquireSmphr(1, s, timeout, __return__);
}
MockExpectedCall& tryAcquireSmphr(unsigned int __numCalls__, CppUMockGen::Parameter<mb::osal::mb_smphr_t &> s, CppUMockGen::Parameter<const size_t> timeout, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::osal::tryAcquireSmphr");
    if(s.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("s", &s.getValue()); }
    if(timeout.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("timeout", timeout.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } }
