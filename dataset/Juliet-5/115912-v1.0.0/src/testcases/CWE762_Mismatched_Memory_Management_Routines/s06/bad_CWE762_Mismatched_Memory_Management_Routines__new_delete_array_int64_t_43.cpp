namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
<START>
    delete [] data;
<END>
}
} 
