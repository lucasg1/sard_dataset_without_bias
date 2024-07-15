namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN2()
{
    int * data;
    data = NULL;
    FUN0(data);
<START>
    free(data);
<END>
}
} 
