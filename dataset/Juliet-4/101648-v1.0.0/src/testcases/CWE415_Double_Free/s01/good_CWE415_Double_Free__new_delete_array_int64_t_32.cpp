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
        data = new int64_t[100];
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        delete [] data;
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
        delete [] data;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        ; 
    }
}
} 
