project(MbedutilsTest)

set(MBEDUTILS_TEST_DIR "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Directory for mbedutils_test")
set(MBEDUTILS_TEST_EXPECT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/expect" CACHE PATH "Directory for mbedutils_test/expect")
set(MBEDUTILS_TEST_FAKE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/fake" CACHE PATH "Directory for mbedutils_test/fake")
set(MBEDUTILS_TEST_HARNESS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/harness" CACHE PATH "Directory for mbedutils_test/harness")
set(MBEDUTILS_TEST_MOCK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/mock" CACHE PATH "Directory for mbedutils_test/mock")
