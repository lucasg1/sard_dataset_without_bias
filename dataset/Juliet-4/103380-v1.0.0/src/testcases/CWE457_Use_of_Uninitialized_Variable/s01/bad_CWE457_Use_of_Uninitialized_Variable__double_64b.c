void FUN0(void * dataVoidPtr);
void FUN1()
{
    double data;
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    double * dataPtr = (double *)dataVoidPtr;
    double data = (*dataPtr);
<START>
    printDoubleLine(data);
<END>
}
