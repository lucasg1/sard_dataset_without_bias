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
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
} 
