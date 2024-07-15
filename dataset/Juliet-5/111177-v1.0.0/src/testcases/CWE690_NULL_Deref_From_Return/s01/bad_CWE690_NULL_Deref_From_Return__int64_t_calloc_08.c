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
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    if(FUN0())
    {
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
