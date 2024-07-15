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
    delete [] data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
<START>
    printLongLongLine(data[0]);
<END>
}
} 
