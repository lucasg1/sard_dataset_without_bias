static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR0;
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    int * VAR2 = (int *)ALLOCA(50*sizeof(int));
    int * VAR3 = (int *)ALLOCA(100*sizeof(int));
<START>
    data = VAR2;
<END>
    VAR0 = data;
    FUN0();
}
