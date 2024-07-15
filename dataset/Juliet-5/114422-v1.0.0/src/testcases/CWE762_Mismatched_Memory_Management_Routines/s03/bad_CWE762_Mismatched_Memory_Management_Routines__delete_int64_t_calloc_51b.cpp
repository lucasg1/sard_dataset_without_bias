namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
<START>
    delete data;
<END>
}
} 
