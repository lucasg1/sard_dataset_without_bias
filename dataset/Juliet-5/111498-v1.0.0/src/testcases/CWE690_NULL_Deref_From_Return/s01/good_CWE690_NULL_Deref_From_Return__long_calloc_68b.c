long * VAR0;
long * VAR1;
void FUN0();
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    VAR1 = data;
    FUN0();
}
extern long * VAR0;
extern long * VAR1;
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
