#include "unity.h"

void setUp(void)
{

}

void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(pass_info);

    return(UnityEnd());
}