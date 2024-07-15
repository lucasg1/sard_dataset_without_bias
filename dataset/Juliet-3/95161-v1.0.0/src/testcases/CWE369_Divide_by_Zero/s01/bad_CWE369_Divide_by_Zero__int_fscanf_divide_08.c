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
    data = -1;
    if(FUN0())
    {
        fscanf(stdin, "%d", &data);
    }
    if(FUN0())
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
