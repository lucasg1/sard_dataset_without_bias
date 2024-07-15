static int64_t FUN0(int64_t data)
{
    fscanf (stdin, "%" SCNd64, &data);
    return data;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = FUN0(data);
    {
<START>
        ++data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
