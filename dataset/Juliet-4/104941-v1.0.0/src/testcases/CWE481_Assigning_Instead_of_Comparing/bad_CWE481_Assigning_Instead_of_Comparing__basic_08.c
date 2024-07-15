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
    if(FUN0())
    {
        {
            int intRand = rand();
<START>
            if(intRand = 5)
<END>
            {
                printLine("i was 5");
            }
        }
    }
}
