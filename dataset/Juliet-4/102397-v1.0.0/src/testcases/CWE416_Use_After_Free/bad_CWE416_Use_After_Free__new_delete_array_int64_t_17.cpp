namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
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
    for(j = 0; j < 1; j++)
    {
<START>
        printLongLongLine(data[0]);
<END>
    }
}
} 
