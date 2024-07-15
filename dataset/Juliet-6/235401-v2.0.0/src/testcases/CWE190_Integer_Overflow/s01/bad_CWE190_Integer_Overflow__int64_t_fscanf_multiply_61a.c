int64_t FUN0(int64_t data)
{
    fscanf (stdin, "%" SCNd64, &data);
    return data;
}
int64_t FUN0(int64_t data);
void FUN2()
{
    int64_t data;
    data = 0LL;
    data = FUN0(data);
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
