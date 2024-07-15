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
    char data;
    data = ' ';
    if(FUN0())
    {
        data = (char)RAND32();
    }
    if(FUN0())
    {
        {
<START>
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
