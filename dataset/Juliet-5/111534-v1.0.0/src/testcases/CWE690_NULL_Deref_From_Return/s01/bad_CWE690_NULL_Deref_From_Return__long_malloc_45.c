static long * VAR0;
static long * VAR1;
void FUN0()
{
    long * data = VAR0;
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    VAR0 = data;
    FUN0();
}
