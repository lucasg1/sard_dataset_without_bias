void FUN0(int64_t data);
void FUN1(int64_t data)
{
    FUN0(data);
}
void FUN1(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    FUN1(data);
}
void FUN4(int64_t data);
void FUN0(int64_t data)
{
    FUN4(data);
}
void FUN4(int64_t data)
{
    {
<START>
        --data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
