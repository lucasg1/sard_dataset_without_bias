namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    free(data);
<END>
}
} 
