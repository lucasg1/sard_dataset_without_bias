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
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    if(FUN0())
    {
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
