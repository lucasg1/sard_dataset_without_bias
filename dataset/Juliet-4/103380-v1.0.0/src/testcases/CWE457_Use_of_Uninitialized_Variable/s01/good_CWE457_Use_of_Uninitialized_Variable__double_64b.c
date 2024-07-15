void FUN0(void * dataVoidPtr);
void FUN1()
{
    double data;
    data = 5.0;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    double data;
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    double * dataPtr = (double *)dataVoidPtr;
    double data = (*dataPtr);
    printDoubleLine(data);
}
void FUN2(void * dataVoidPtr)
{
    double * dataPtr = (double *)dataVoidPtr;
    double data = (*dataPtr);
    data = 5.0;
    printDoubleLine(data);
}
