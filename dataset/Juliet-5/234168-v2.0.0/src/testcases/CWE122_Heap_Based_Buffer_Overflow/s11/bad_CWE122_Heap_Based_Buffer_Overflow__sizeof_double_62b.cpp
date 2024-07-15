namespace NAMESPACE0
{
void FUN0(double * &data);
void FUN1()
{
    double * data;
    data = NULL;
    FUN0(data);
    printDoubleLine(*data);
    free(data);
}
} 
namespace NAMESPACE0
{
void FUN0(double * &data)
{
    data = (double *)malloc(sizeof(data));
<START>
    if (data == NULL) {exit(-1);}
<END>
    *data = 1.7E300;
}
} 
