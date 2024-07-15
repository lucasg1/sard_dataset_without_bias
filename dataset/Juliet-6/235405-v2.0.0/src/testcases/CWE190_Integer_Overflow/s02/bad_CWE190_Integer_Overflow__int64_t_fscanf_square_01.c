void FUN0()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
