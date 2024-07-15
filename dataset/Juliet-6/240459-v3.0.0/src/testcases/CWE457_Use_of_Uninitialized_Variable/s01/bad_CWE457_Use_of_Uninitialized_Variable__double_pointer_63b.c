void FUN0(double * * dataPtr);
void FUN1()
{
    double * data;
    ; 
    FUN0(&data);
}
void FUN0(double * * dataPtr)
{
    double * data = *dataPtr;
<START>
    printDoubleLine(*data);
<END>
}
