namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    if(globalTrue)
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
