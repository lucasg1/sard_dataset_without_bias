static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
void FUN3()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    if(FUN0())
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
