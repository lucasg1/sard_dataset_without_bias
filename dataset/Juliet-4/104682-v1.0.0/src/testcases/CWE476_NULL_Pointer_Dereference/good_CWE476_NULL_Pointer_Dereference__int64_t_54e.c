void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3(int64_t * data)
{
    FUN2(data);
}
void FUN4(int64_t * data);
void FUN5()
{
    int64_t * data;
    {
        int64_t tmpData = 5LL;
        data = &tmpData;
    }
    FUN4(data);
}
void FUN6(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    FUN6(data);
}
void FUN9(int64_t * data);
void FUN4(int64_t * data)
{
    FUN9(data);
}
void FUN11(int64_t * data);
void FUN6(int64_t * data)
{
    FUN11(data);
}
void FUN1(int64_t * data);
void FUN9(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN11(int64_t * data)
{
    FUN3(data);
}
void FUN0(int64_t * data)
{
    printLongLongLine(*data);
}
void FUN2(int64_t * data)
{
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
