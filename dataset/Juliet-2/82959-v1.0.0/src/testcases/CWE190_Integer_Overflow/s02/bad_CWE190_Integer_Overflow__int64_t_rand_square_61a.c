int64_t FUN0(int64_t data)
{
    data = (int64_t)RAND64();
    return data;
}
int64_t FUN0(int64_t data);
void FUN2()
{
    int64_t data;
    data = 0LL;
    data = FUN0(data);
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
