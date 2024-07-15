namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
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
