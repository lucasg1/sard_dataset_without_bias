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
        data = CHAR_MAX;
    }
    if(FUN0())
    {
        {
<START>
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
}