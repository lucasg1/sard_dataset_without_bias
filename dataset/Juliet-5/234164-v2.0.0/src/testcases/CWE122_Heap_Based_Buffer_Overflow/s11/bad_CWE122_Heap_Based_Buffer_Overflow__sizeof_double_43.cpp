namespace NAMESPACE0
{
void FUN0(double * &data)
{
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
}
void FUN1()
{
    double * data;
    data = NULL;
    FUN0(data);
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
} 
