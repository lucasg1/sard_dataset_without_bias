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
    data = 0;
    if(FUN0())
    {
        fscanf(stdin, "%d", &data);
    }
    if(FUN0())
    {
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
