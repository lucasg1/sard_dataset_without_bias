static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    twoIntsStruct * dataBadBuffer = (twoIntsStruct *)ALLOCA(50*sizeof(twoIntsStruct));
    twoIntsStruct * dataGoodBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    if(FUN0())
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
        memmove(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
    }
}
