void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    void (*funcPtr) (int64_t) = FUN0;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    funcPtr(data);
}
void FUN0(int64_t data)
{
    {
<START>
        int64_t result = data + 1;
<END>
        printLongLongLine(result);
    }
}