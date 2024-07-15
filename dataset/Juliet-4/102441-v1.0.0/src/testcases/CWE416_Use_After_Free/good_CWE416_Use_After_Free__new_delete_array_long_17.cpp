namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
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
    long * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    for(j = 0; j < 1; j++)
    {
        printLongLine(data[0]);
    }
}
} 
