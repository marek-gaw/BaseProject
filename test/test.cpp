/*
 * original source: #https://stackoverflow.com/questions/31363090/c-testing-classes-with-catch
 */

#define CATCH_CONFIG_MAIN
#include "../lib/catch/catch.hpp"
#include "../src/TestClass.hpp"

TEST_CASE("addition") {
TestClass testClass;
REQUIRE(testClass.add(2,3) == 5);
REQUIRE(testClass.add(-1, 1) == 0);
REQUIRE(testClass.add(2, 4) == 6);
}