void FUN0(twoIntsStruct * * data);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    data = dataGoodBuffer;
    FUN0(&data);
}
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
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
