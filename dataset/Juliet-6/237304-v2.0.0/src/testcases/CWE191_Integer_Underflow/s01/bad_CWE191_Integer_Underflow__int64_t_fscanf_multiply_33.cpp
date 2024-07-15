namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    {
        int64_t data = dataRef;
        if(data < 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
}
} 
