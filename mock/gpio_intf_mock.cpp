/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "../../mbedutils/include/mbedutils/interfaces/gpio_intf.hpp"

#include <CppUTestExt/MockSupport.h>

bool mb::hw::gpio::intf::init(const mb::hw::gpio::PinConfig & config)
{
    return mock().actualCall("mb::hw::gpio::intf::init").withParameterOfType("mb::hw::gpio::PinConfig", "config", &config).returnBoolValue();
}

void mb::hw::gpio::intf::write(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::State_t state)
{
    mock().actualCall("mb::hw::gpio::intf::write").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withIntParameter("state", static_cast<int>(state));
}

void mb::hw::gpio::intf::toggle(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin)
{
    mock().actualCall("mb::hw::gpio::intf::toggle").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin);
}

mb::hw::gpio::State_t mb::hw::gpio::intf::read(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin)
{
    return static_cast<mb::hw::gpio::State_t>(mock().actualCall("mb::hw::gpio::intf::read").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).returnIntValue());
}

void mb::hw::gpio::intf::setAlternate(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::Alternate_t alternate)
{
    mock().actualCall("mb::hw::gpio::intf::setAlternate").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withUnsignedIntParameter("alternate", alternate);
}

void mb::hw::gpio::intf::setPull(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::Pull_t pull)
{
    mock().actualCall("mb::hw::gpio::intf::setPull").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withUnsignedIntParameter("pull", pull);
}

void mb::hw::gpio::intf::setDrive(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::Drive_t drive)
{
    mock().actualCall("mb::hw::gpio::intf::setDrive").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withUnsignedIntParameter("drive", drive);
}

void mb::hw::gpio::intf::setSpeed(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::Speed_t speed)
{
    mock().actualCall("mb::hw::gpio::intf::setSpeed").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withUnsignedIntParameter("speed", speed);
}

void mb::hw::gpio::intf::setMode(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::Mode_t mode)
{
    mock().actualCall("mb::hw::gpio::intf::setMode").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withUnsignedIntParameter("mode", mode);
}

void mb::hw::gpio::intf::attachInterrupt(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin, const mb::hw::gpio::Trigger_t trigger, const mb::hw::gpio::Callback_t & callback)
{
    mock().actualCall("mb::hw::gpio::intf::attachInterrupt").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).withUnsignedIntParameter("trigger", trigger).withParameterOfType("mb::hw::gpio::Callback_t", "callback", &callback);
}

void mb::hw::gpio::intf::detachInterrupt(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin)
{
    mock().actualCall("mb::hw::gpio::intf::detachInterrupt").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin);
}

uint32_t mb::hw::gpio::intf::getInterruptLine(const mb::hw::gpio::Port_t port, const mb::hw::gpio::Pin_t pin)
{
    return static_cast<uint32_t>(mock().actualCall("mb::hw::gpio::intf::getInterruptLine").withUnsignedIntParameter("port", port).withUnsignedIntParameter("pin", pin).returnUnsignedIntValue());
}

