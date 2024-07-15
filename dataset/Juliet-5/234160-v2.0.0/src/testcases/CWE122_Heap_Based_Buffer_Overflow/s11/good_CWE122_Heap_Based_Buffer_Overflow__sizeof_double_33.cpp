namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    double * &dataRef = data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    {
        double * data = dataRef;
        printDoubleLine(*data);
        free(data);
    }
}
} 
