void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    void (*funcPtr) (int64_t) = FUN0;
    data = 0LL;
    data = 2;
    funcPtr(data);
}
void FUN2(int64_t data);
void FUN3()
{
    int64_t data;
    void (*funcPtr) (int64_t) = FUN2;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    funcPtr(data);
}
void FUN0(int64_t data)
{
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN2(int64_t data)
{
    if (data < LLONG_MAX)
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
