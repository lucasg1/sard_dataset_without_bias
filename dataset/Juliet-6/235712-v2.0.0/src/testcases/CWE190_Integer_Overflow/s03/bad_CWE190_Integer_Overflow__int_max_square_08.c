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
        data = INT_MAX;
    }
    if(FUN0())
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
