#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "pong-paddle.h"

TEST_CASE("testing the left paddle")
{
    auto lp = makeLeftPaddle();
    CHECK(lp.getOutlineThickness() == 3);
}
