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
    int count;
    count = -1;
    if(FUN0())
    {
        fscanf(stdin, "%d", &count);
    }
    if(FUN0())
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
