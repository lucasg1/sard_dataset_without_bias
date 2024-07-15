namespace NAMESPACE0
{
void FUN0()
{
    int h;
    twoIntsStruct * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            twoIntsStruct * dataBuffer = new twoIntsStruct[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
    }
    printStructLine(&data[0]);
    delete [] data;
}
} 
