static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR0;
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10);
    VAR0 = data;
    FUN0();
}
