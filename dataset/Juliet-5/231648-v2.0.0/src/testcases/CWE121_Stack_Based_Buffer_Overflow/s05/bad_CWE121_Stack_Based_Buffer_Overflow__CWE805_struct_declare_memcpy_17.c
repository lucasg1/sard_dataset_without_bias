void FUN0()
{
    int i;
    twoIntsStruct * data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    for(i = 0; i < 1; i++)
    {
        data = dataBadBuffer;
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
<START>
        memcpy(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
    }
}
