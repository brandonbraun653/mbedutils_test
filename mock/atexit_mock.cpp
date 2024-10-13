/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++20
 */

#include "../../mbedutils/include/mbedutils/drivers/system/atexit.hpp"

#include <CppUTestExt/MockSupport.h>

void mb::system::atexit::initialize()
{
    mock().actualCall("mb::system::atexit::initialize");
}

bool mb::system::atexit::registerCallback(mb::system::atexit::Callback & callback, uint32_t priority)
{
    return mock().actualCall("mb::system::atexit::registerCallback").withOutputParameterOfType("mb::system::atexit::Callback", "callback", &callback).withUnsignedIntParameter("priority", priority).returnBoolValue();
}

bool mb::system::atexit::unregisterCallback(mb::system::atexit::Callback & callback)
{
    return mock().actualCall("mb::system::atexit::unregisterCallback").withOutputParameterOfType("mb::system::atexit::Callback", "callback", &callback).returnBoolValue();
}

void mb::system::atexit::exit()
{
    mock().actualCall("mb::system::atexit::exit");
}

