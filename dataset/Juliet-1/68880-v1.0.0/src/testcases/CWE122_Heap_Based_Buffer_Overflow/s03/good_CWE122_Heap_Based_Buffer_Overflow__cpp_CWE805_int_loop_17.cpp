namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new int[100];
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
