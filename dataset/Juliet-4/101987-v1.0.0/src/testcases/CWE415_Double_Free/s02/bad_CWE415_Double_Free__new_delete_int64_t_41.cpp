namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    delete data;
    FUN0(data);
}
} 
