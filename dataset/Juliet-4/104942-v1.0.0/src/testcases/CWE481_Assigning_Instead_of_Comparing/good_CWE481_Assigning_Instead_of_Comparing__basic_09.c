void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int intRand = rand();
            if(intRand == 5)
            {
                printLine("i was 5");
            }
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            int intRand = rand();
            if(intRand == 5)
            {
                printLine("i was 5");
            }
        }
    }
}
