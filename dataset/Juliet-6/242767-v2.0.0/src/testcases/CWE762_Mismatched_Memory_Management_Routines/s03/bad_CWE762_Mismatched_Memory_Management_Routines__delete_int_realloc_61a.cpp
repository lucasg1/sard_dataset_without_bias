namespace NAMESPACE0
{
int * FUN0(int * data)
{
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    return data;
}
} 
namespace NAMESPACE0
{
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete data;
<END>
}
} 
