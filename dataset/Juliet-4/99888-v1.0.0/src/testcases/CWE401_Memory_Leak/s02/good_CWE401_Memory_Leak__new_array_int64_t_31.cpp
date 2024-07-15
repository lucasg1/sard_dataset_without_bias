namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    int64_t VAR1[100];
    data = VAR1;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        delete[] data;
    }
}
} 
