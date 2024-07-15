namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        int64_t VAR1;
        data = &VAR1;
        *data = 5LL;
        printLongLongLine(*data);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        data = new int64_t;
        *data = 5LL;
        printLongLongLine(*data);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        delete data;
    }
}
} 
