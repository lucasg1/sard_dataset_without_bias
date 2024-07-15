void FUN0()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        {
<START>
            ++data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
