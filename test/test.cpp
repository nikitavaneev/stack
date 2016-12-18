#include <gtest/gtest.h>
#include "polindrom.h"

TEST(stack, check_min) {
	Stack a;
	a.push(3);
	a.push(4);
	ASSERT_EQ(a.minimum(), 3);
}

TEST(stack, check_min_empty) {
	Stack a;
	ASSERT_ANY_THROW(a.minimum());
}

TEST(stack, check_top) {
	Stack a;
	a.push(10);
	ASSERT_EQ(a.top(), 10);
}

TEST(stack, check_top_empty) {
	Stack a;
	ASSERT_ANY_THROW(a.top());
}

TEST(stack, check_pop_empty) {
	Stack a;
	ASSERT_ANY_THROW(a.pop());
}

TEST(stack, check_push) {
	Stack a;

	a.push(10);

	EXPECT_EQ(a.top(), 10);
}

int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}