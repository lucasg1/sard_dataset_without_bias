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
        int64_t VAR1[100];
        data = VAR1;
        data[0] = 5LL;
        printLongLongLine(data[0]);
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
        data = new int64_t[100];
        data[0] = 5LL;
        printLongLongLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        delete[] data;
    }
}
} 
