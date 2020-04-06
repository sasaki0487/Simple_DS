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
        EXPECT_EQ(t.find("aaaaa"),true) << "\"aaaaa\" should be find in \"aaaaaa\"" ; 
        EXPECT_EQ(t.find("ababab"),true) << "\"ababab\" should be find in \"ababab\"" ; 
        EXPECT_EQ(t.find("six"),true) << "\"six\"should be find in \"sixtynine\"" ; 
        EXPECT_EQ(t.find("sixty"),true) << "\"sixty\" should be find in \"sixtynine\"" ; 
        EXPECT_EQ(t.find("sixtynine"),true) << "\"sixtynine should be find in \"sixtynine\"" ; 
        EXPECT_EQ(t.find("aaaaaaaaa"),false) << "\"aaaaaaaaa should not be found"; 
        EXPECT_EQ(t.find("nine"),false) << "\"nine should not be found"; 
    }
    TEST_F(TrieTest,SFind){
        EXPECT_EQ(t.sfind("aaaaaa"),true) << "\"aaaaaa\" should be found"; 
        EXPECT_EQ(t.sfind("ababab"),true) << "\"ababab\" should be found"; 
        EXPECT_EQ(t.sfind("sixtynine"),true) << "\"sixtynine should be found"; 
        EXPECT_EQ(t.sfind("aaaaaaaaa"),false) << "\"aaaaaaaaa\" should not be found"; 
        EXPECT_EQ(t.sfind("abab"),false) << "\"abab\" should not be found"; 
        EXPECT_EQ(t.sfind("aaa"),false) << "\"aaa\" should not be found"; 
        EXPECT_EQ(t.sfind("six"),false) << "\"six\" should not be found"; 
        EXPECT_EQ(t.sfind("nine"),false) << "\"nine\" should not be found"; 
    }
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
