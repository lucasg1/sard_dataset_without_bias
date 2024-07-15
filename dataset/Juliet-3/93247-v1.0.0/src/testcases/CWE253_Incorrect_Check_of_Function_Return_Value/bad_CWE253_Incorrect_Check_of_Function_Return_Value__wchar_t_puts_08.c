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
<START>
        if (PUTS(L"string") == 0)
<END>
        {
            printLine("puts failed!");
        }
    }
}
