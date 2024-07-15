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
    int data;
    data = -1;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
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
void FUN3()
{
    int data;
    data = -1;
    if(FUN0())
    {
        data = 20;
    }
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
