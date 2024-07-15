static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR1;
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
void FUN1()
{
    int * data;
    int * VAR2 = (int *)ALLOCA(50*sizeof(int));
    int * VAR3 = (int *)ALLOCA(100*sizeof(int));
    data = VAR3;
    VAR1 = data;
    FUN0();
}
