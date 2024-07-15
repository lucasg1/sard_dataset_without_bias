void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    data = dataBadBuffer;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
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
            memmove(data, source, 100*sizeof(twoIntsStruct));
<END>
            printStructLine(&data[0]);
        }
    }
}
