static int VAR0 = 0;
static int VAR1 = 0;
static int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}
static int FUN2(int data)
{
    if(VAR1)
    {
        data = 20;
    }
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN2(data);
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}
