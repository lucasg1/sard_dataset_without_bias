void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN1(long * data);
void FUN3()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    FUN1(data);
}
void FUN0(long * data)
{
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
