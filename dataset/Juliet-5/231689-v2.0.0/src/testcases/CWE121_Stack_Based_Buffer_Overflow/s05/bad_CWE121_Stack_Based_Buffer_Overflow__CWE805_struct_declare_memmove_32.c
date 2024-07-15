void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    {
        twoIntsStruct * data = *dataPtr1;
        data = dataBadBuffer;
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
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
