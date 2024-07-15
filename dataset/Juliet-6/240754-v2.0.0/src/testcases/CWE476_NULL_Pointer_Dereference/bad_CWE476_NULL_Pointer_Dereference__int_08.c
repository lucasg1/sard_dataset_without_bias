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
    int * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
<START>
        printIntLine(*data);
<END>
    }
}
