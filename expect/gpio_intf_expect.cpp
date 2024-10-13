/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "gpio_intf_expect.hpp"

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& init(CppUMockGen::Parameter<const mb::hw::gpio::PinConfig &> config, bool __return__)
{
    return init(1, config, __return__);
}
MockExpectedCall& init(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::PinConfig &> config, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::init");
    if(config.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("mb::hw::gpio::PinConfig", "config", &config.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& write(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::State_t> state)
{
    return write(1, port, pin, state);
}
MockExpectedCall& write(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::State_t> state)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::write");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(state.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withIntParameter("state", static_cast<int>(state.getValue())); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& toggle(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin)
{
    return toggle(1, port, pin);
}
MockExpectedCall& toggle(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::toggle");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& read(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, mb::hw::gpio::State_t __return__)
{
    return read(1, port, pin, __return__);
}
MockExpectedCall& read(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, mb::hw::gpio::State_t __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::read");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    __expectedCall__.andReturnValue(static_cast<int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& setAlternate(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Alternate_t> alternate)
{
    return setAlternate(1, port, pin, alternate);
}
MockExpectedCall& setAlternate(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Alternate_t> alternate)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::setAlternate");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(alternate.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("alternate", alternate.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& setPull(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Pull_t> pull)
{
    return setPull(1, port, pin, pull);
}
MockExpectedCall& setPull(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Pull_t> pull)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::setPull");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(pull.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pull", pull.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& setDrive(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Drive_t> drive)
{
    return setDrive(1, port, pin, drive);
}
MockExpectedCall& setDrive(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Drive_t> drive)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::setDrive");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(drive.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("drive", drive.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& setSpeed(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Speed_t> speed)
{
    return setSpeed(1, port, pin, speed);
}
MockExpectedCall& setSpeed(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Speed_t> speed)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::setSpeed");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(speed.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("speed", speed.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& setMode(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Mode_t> mode)
{
    return setMode(1, port, pin, mode);
}
MockExpectedCall& setMode(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Mode_t> mode)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::setMode");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(mode.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("mode", mode.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& attachInterrupt(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Trigger_t> trigger, CppUMockGen::Parameter<const mb::hw::gpio::Callback_t &> callback)
{
    return attachInterrupt(1, port, pin, trigger, callback);
}
MockExpectedCall& attachInterrupt(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, CppUMockGen::Parameter<const mb::hw::gpio::Trigger_t> trigger, CppUMockGen::Parameter<const mb::hw::gpio::Callback_t &> callback)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::attachInterrupt");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(trigger.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("trigger", trigger.getValue()); }
    if(callback.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("mb::hw::gpio::Callback_t", "callback", &callback.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& detachInterrupt(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin)
{
    return detachInterrupt(1, port, pin);
}
MockExpectedCall& detachInterrupt(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::detachInterrupt");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

namespace expect { namespace mb$ { namespace hw$ { namespace gpio$ { namespace intf$ {
MockExpectedCall& getInterruptLine(CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, uint32_t __return__)
{
    return getInterruptLine(1, port, pin, __return__);
}
MockExpectedCall& getInterruptLine(unsigned int __numCalls__, CppUMockGen::Parameter<const mb::hw::gpio::Port_t> port, CppUMockGen::Parameter<const mb::hw::gpio::Pin_t> pin, uint32_t __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "mb::hw::gpio::intf::getInterruptLine");
    if(port.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("port", port.getValue()); }
    if(pin.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("pin", pin.getValue()); }
    __expectedCall__.andReturnValue(static_cast<unsigned int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} } } } }

