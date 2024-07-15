static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    if(staticTrue)
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
