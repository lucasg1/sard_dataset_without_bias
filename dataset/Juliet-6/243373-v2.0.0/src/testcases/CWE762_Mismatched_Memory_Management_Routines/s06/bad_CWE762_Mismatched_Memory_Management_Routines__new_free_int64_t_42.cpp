namespace NAMESPACE0
{
static int64_t * FUN0(int64_t * data)
{
    data = new int64_t;
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
} 
