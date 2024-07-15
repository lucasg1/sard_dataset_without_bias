namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data)
{
    data = new int64_t;
    return data;
}
} 
namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data);
void FUN2()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
