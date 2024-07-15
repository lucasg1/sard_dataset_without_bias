namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t[100];
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 
