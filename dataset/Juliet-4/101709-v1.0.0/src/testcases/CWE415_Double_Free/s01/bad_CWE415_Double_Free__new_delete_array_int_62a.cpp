namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[100];
    delete [] data;
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
    delete [] data;
<END>
}
} 
