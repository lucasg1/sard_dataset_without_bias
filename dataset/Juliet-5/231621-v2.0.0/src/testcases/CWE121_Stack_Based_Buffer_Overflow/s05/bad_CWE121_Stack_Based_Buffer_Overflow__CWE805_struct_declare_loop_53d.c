void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN1(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    data = dataBadBuffer;
    FUN1(data);
}
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN4(twoIntsStruct * data)
{
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
<START>
                data[i] = source[i];
<END>
            }
            printStructLine(&data[0]);
        }
    }
}
