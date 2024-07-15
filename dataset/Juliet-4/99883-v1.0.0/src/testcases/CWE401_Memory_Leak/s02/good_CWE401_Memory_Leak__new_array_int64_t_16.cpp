namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = new int64_t[100];
        data[0] = 5LL;
        printLongLongLine(data[0]);
        break;
    }
    while(1)
    {
        delete[] data;
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        int64_t VAR1[100];
        data = VAR1;
        data[0] = 5LL;
        printLongLongLine(data[0]);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
