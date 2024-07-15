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
        fscanf (stdin, "%c", &data);
    }
    if(FUN0())
    {
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
