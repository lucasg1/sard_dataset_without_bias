void FUN0(twoIntsStruct * * dataPtr);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataBadBuffer = (twoIntsStruct *)ALLOCA(50*sizeof(twoIntsStruct));
    twoIntsStruct * dataGoodBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data = dataBadBuffer;
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
<START>
        memmove(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
    }
}
