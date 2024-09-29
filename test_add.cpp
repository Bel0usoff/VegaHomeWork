#include<gtest/gtest.h>

#include "Rect.hpp"

TEST(Geom,Simple)
{   
    EXPECT_EQ(Area(3,6),Area(6,3));
    EXPECT_EQ(Area(3,6),18);
    
    EXPECT_EQ(Perimetr(2,5),14);
    
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}