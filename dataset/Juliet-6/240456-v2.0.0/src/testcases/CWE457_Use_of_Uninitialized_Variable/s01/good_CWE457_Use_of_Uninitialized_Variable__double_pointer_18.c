void FUN0()
{
    double * data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = (double *)malloc(sizeof(double));
    if (data == NULL) {exit(-1);}
    *data = 5.0;
    printDoubleLine(*data);
}
void FUN1()
{
    double * data;
    goto source;
source:
    data = (double *)malloc(sizeof(double));
    if (data == NULL) {exit(-1);}
    *data = 5.0;
    goto sink;
sink:
    printDoubleLine(*data);
}
