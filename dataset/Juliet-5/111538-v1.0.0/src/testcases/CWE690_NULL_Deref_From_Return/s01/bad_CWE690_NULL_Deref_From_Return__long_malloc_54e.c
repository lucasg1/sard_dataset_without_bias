void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    FUN0(data);
}
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
void FUN3(long * data);
void FUN5(long * data)
{
    FUN3(data);
}
void FUN5(long * data);
void FUN0(long * data)
{
    FUN5(data);
}
void FUN2(long * data)
{
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
