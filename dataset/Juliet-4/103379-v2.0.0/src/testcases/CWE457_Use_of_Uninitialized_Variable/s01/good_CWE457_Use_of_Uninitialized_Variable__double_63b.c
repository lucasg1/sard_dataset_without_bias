void FUN0(double * data);
void FUN1()
{
    double data;
    data = 5.0;
    FUN0(&data);
}
void FUN2(double * data);
void FUN3()
{
    double data;
    ; 
    FUN2(&data);
}
void FUN0(double * dataPtr)
{
    double data = *dataPtr;
    printDoubleLine(data);
}
void FUN2(double * dataPtr)
{
    *dataPtr = 5.0;
    double data = *dataPtr;
    printDoubleLine(data);
}
