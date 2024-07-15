void FUN0(void * dataVoidPtr);
void FUN1()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    double * * dataPtr = (double * *)dataVoidPtr;
    double * data = (*dataPtr);
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
}
void FUN2(void * dataVoidPtr)
{
    double * * dataPtr = (double * *)dataVoidPtr;
    double * data = (*dataPtr);
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
}
