void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
void FUN2(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
