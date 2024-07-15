long * VAR0;
long * VAR1;
long * VAR2;
void FUN0();
void FUN1()
{
    long * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}
extern long * VAR0;
extern long * VAR1;
extern long * VAR2;
void FUN0()
{
    long * data = VAR0;
<START>
    printLongLine(*data);
<END>
}
