void FUN0(int64_t dataArray[]);
void FUN1()
{
    int64_t data;
    int64_t dataArray[5];
    data = 0LL;
    data = LLONG_MAX;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int64_t dataArray[])
{
    int64_t data = dataArray[2];
    {
<START>
        int64_t result = data + 1;
<END>
        printLongLongLine(result);
    }
}
