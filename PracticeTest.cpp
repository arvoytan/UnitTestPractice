/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"
#include<iostream>
using namespace std;

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
		actual = obj.isPalindrome("a1hjufdkamsdlkrfg;lkjk");
		ASSERT_FALSE(actual);

}

TEST(PracticeTest, sortDescending)
{
		int a = 0;
		int b = 1;
		int c = 2;
		Practice obj;
		obj.sortDescending(a,b,c);
		//cout<<a<<" "<<b<<" "<<c<<" "<<endl;
		bool value;
		if(a ==2 &&b==1&&c==0){
			value = true;
		}
		else{
			value = false;
		}
		ASSERT_TRUE(value);
		a = 0;
		b = 2;
		c = 1;
		obj.sortDescending(a,b,c);
		if(a ==2 &&b==1&&c==0){
			value = true;
		}
		else{
			value = false;
		}
		ASSERT_TRUE(value);
		a = 2;
		b = 0;
	  c = 1;
		obj.sortDescending(a,b,c);
		if(a ==2 &&b==1&&c==0){
			value = true;
		}
		else{
		 value = false;
		}
		ASSERT_TRUE(value);


}
