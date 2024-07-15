static long * FUN0(long * data)
{
    data = (long *)calloc(1, sizeof(long));
    return data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    data = FUN0(data);
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
