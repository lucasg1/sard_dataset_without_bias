static long * VAR0;
static long * VAR1;
void FUN0()
{
    long * data = VAR1;
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    VAR1 = data;
    FUN0();
}
