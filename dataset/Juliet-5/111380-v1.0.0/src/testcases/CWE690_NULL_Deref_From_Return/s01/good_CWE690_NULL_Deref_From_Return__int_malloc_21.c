static int VAR0 = 0;
static int VAR1 = 0;
void FUN0(int * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int * data)
{
    if(VAR1)
    {
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
void FUN3()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    VAR1 = 1; 
    FUN2(data);
}
