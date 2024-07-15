void FUN0(int64_t data)
{
    {
<START>
        data++;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    void (*funcPtr) (int64_t) = FUN0;
    data = 0LL;
    data = LLONG_MAX;
    funcPtr(data);
}
