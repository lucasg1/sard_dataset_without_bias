void FUN0(int64_t dataArray[]);
void FUN1()
{
    int64_t data;
    int64_t dataArray[5];
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int64_t dataArray[])
{
    int64_t data = dataArray[2];
    {
<START>
        data--;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
