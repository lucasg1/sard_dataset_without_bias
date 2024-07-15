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
    float data;
    data = 0.0F;
    if(FUN0())
    {
        data = 0.0F;
    }
    if(FUN0())
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
