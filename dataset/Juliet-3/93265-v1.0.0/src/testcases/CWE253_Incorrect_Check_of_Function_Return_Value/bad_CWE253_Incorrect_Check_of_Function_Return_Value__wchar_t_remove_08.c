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
        if (REMOVE(L"removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
