void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3(int64_t * data)
{
    FUN2(data);
}
void FUN3(int64_t * data);
void FUN0(int64_t * data)
{
    FUN3(data);
}
void FUN2(int64_t * data)
{
<START>
    printLongLongLine(*data);
<END>
}
