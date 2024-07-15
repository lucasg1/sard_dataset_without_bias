void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
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
