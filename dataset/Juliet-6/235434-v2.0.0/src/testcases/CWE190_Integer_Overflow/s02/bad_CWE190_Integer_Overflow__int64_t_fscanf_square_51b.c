void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    FUN0(data);
}
void FUN0(int64_t data)
{
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
