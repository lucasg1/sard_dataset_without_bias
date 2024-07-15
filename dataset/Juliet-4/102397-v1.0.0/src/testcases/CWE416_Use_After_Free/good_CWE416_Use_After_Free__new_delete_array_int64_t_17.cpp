namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    int64_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
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
    for(j = 0; j < 1; j++)
    {
        printLongLongLine(data[0]);
    }
}
} 
