void FUN0(int64_t data)
{
    {
<START>
        ++data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    FUN0(data);
}
