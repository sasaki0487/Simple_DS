#include "trie.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>

namespace{
    class TrieTest : public :: testing::Test {
        protected:
        void SetUp() override{
            t.insert("aaaaaa");
            t.insert("ababab");
            t.insert("sixtynine");
        }
        public:
        Trie t;
    };

    TEST_F(TrieTest,Find){
        EXPECT_EQ(t.find("aaaaa"),true);
    }
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
