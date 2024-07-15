static int VAR0 = 0;
static int VAR1 = 0;
static int * FUN0(int * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}
static int * FUN2(int * data)
{
    if(VAR1)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN3()
{
    int * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}
