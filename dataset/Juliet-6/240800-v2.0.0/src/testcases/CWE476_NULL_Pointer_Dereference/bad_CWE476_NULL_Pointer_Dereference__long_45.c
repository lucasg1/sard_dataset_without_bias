static long * VAR0;
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR0;
<START>
    printLongLine(*data);
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}
