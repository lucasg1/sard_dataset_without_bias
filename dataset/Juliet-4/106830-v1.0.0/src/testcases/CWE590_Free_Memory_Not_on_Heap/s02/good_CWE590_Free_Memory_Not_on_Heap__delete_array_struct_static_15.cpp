namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
    printStructLine(&data[0]);
    delete [] data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printStructLine(&data[0]);
    delete [] data;
}
} 
