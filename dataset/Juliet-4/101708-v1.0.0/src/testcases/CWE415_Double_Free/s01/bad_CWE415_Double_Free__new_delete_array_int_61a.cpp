namespace NAMESPACE0
{
int * FUN0(int * data)
{
    data = new int[100];
    delete [] data;
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
    delete [] data;
<END>
}
} 
