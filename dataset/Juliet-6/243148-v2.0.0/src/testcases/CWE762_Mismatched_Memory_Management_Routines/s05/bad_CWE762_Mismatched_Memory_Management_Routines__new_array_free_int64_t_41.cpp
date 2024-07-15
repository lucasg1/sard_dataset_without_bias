namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    FUN0(data);
}
} 
