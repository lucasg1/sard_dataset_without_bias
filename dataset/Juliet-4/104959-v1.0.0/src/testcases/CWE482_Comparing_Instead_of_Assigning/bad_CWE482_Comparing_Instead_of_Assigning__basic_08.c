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
            int VAR0 = 0;
            printIntLine(VAR0);
<START>
            VAR0 == 5;
<END>
            printIntLine(VAR0);
        }
    }
}
