long * FUN0(long * data)
{
    data = (long *)realloc(data, 1*sizeof(long));
    return data;
}
long * FUN0(long * data);
void FUN2()
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
