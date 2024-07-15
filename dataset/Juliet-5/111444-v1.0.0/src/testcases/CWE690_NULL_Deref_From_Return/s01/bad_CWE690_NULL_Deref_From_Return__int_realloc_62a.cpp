namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)realloc(data, 1*sizeof(int));
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
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
} 
