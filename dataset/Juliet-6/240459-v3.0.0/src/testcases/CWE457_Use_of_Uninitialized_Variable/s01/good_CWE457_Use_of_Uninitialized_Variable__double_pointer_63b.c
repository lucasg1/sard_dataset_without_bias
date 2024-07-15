void FUN0(double * * data);
void FUN1()
{
    double * data;
    data = (double *)malloc(sizeof(double));
    if (data == NULL) {exit(-1);}
    *data = 5.0;
    FUN0(&data);
}
void FUN2(double * * data);
void FUN3()
{
    double * data;
    ; 
    FUN2(&data);
}
void FUN0(double * * dataPtr)
{
    double * data = *dataPtr;
    printDoubleLine(*data);
}
void FUN2(double * * dataPtr)
{
    *dataPtr = (double *)malloc(sizeof(double));
    if (*dataPtr  == NULL) {exit(-1);}
    double * data = *dataPtr;
    *data = 5.0;
    printDoubleLine(*data);
}
