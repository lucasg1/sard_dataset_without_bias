namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    fscanf (stdin, "%" SCNd64, &data);
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
} 
