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
    char * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
    {
<START>
        printHexCharLine(data[0]);
<END>
    }
}
