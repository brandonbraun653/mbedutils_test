/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include <CppUMockGen.hpp>

#include "../../mbedutils/include/mbedutils/interfaces/time_intf.hpp"

#include <CppUTestExt/MockSupport.h>

namespace expect { namespace mb$ { namespace time$ {
MockExpectedCall& millis(size_t __return__);
MockExpectedCall& millis(unsigned int __numCalls__, size_t __return__);
} } }

namespace expect { namespace mb$ { namespace time$ {
MockExpectedCall& micros(size_t __return__);
MockExpectedCall& micros(unsigned int __numCalls__, size_t __return__);
} } }

namespace expect { namespace mb$ { namespace time$ {
MockExpectedCall& delayMilliseconds(CppUMockGen::Parameter<const size_t> val);
MockExpectedCall& delayMilliseconds(unsigned int __numCalls__, CppUMockGen::Parameter<const size_t> val);
} } }

namespace expect { namespace mb$ { namespace time$ {
MockExpectedCall& delayMicroseconds(CppUMockGen::Parameter<const size_t> val);
MockExpectedCall& delayMicroseconds(unsigned int __numCalls__, CppUMockGen::Parameter<const size_t> val);
} } }
