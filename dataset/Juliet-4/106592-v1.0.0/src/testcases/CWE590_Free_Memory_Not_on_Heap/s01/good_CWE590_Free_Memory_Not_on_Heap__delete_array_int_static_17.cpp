namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            int * dataBuffer = new int[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0]);
    delete [] data;
}
} 
