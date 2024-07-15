static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
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
