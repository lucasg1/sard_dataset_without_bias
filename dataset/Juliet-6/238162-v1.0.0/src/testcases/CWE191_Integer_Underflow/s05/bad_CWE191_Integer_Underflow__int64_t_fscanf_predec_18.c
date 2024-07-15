void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    fscanf (stdin, "%" SCNd64, &data);
    goto sink;
sink:
    {
<START>
        --data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
