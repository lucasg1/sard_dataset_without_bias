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
<START>
            int data = rand();
<END>
            printIntLine(data);
        }
    }
}
