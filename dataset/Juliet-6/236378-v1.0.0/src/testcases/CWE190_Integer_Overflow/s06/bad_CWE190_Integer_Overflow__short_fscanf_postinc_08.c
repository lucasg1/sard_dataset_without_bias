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
    short data;
    data = 0;
    if(FUN0())
    {
        fscanf (stdin, "%hd", &data);
    }
    if(FUN0())
    {
        {
<START>
            data++;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
