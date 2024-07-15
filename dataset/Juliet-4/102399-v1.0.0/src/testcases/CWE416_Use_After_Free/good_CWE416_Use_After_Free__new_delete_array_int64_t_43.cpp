namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    printLongLongLine(data[0]);
}
void FUN2(int64_t * &data)
{
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    delete [] data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
