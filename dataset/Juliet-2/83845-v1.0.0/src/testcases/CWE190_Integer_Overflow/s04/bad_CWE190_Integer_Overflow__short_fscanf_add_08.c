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
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}