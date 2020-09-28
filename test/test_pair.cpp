#include "pair.h"

#include <gtest.h>


TEST(TPair, can_get_value_of_gerst_el_of_pair)
{
	TPair <int, int> p(2, 3);
	EXPECT_EQ(2, p.getFirst());
	EXPECT_EQ(3, p.getSecond());
}

TEST(TPair, can_create_pair)
{
	TPair<int, int> p(2, 3);
	EXPECT_EQ(2, p.getFirst());
	EXPECT_EQ(2, p.getFirst());
}

TEST(TPair, can_swap_of_two_classes)
{
	TPair <int, int> a(4, 8), b(3, 7);
	a.swap(b);
	EXPECT_EQ(3, a.getFirst());
	EXPECT_EQ(7, a.getSecond());
	EXPECT_EQ(4, b.getFirst());
	EXPECT_EQ(8, b.getSecond());
}

TEST(TPair, use_various_operators_of_classes)
{
	TPair <int, int> a(4, 8), b(3, 9), c(10, 0), d(3,9);
	EXPECT_EQ(1, a>b);
	EXPECT_EQ(0, a>c);
	EXPECT_EQ(1, a<c);
	EXPECT_EQ(0, a<d);
	EXPECT_EQ(1, a!=d);
	EXPECT_EQ(0, b!=d);
	EXPECT_EQ(1, b==d);
	EXPECT_EQ(0, c==d);

	a = c;
	EXPECT_EQ(10, a.getFirst());
	EXPECT_EQ(0, a.getSecond());


}

