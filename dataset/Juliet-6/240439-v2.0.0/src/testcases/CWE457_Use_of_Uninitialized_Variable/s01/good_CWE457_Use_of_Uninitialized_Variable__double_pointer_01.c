void FUN0()
{
    double * data;
    data = (double *)malloc(sizeof(double));
    if (data == NULL) {exit(-1);}
    *data = 5.0;
    printDoubleLine(*data);
}
void FUN1()
{
    double * data;
    ; 
    data = (double *)malloc(sizeof(double));
    if (data == NULL) {exit(-1);}
    *data = 5.0;
    printDoubleLine(*data);
}
