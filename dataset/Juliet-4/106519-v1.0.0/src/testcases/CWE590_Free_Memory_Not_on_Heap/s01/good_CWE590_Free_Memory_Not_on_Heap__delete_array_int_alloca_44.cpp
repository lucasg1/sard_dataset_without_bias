namespace NAMESPACE0
{
void FUN0(int * data)
{
    printIntLine(data[0]);
    delete [] data;
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL; 
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
    funcPtr(data);
}
} 
