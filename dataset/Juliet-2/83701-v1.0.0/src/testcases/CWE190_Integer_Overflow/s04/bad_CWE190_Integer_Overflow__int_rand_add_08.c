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
    int data;
    data = 0;
    if(FUN0())
    {
        data = RAND32();
    }
    if(FUN0())
    {
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
