void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataGoodBuffer;
    }
    {
        twoIntsStruct source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printStructLine(&data[0]);
        }
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    if(1)
    {
        data = dataGoodBuffer;
    }
    {
        twoIntsStruct source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printStructLine(&data[0]);
        }
    }
}
