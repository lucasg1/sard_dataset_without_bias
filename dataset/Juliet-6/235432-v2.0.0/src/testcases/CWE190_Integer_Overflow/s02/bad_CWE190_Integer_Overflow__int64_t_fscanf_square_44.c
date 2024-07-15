void FUN0(int64_t data)
{
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    void (*funcPtr) (int64_t) = FUN0;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    funcPtr(data);
}
