void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
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
