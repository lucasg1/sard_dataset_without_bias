long * VAR0;
long * VAR1;
void FUN0();
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    VAR0 = data;
    FUN0();
}
extern long * VAR0;
extern long * VAR1;
void FUN0()
{
    long * data = VAR0;
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
