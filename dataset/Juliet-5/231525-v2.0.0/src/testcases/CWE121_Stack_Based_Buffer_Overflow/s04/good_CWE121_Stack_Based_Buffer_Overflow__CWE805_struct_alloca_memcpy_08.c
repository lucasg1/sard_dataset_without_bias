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
    if(FUN1())
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
        memcpy(data, source, 100*sizeof(twoIntsStruct));
        printStructLine(&data[0]);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct * dataBadBuffer = (twoIntsStruct *)ALLOCA(50*sizeof(twoIntsStruct));
    twoIntsStruct * dataGoodBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    if(FUN0())
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
        memcpy(data, source, 100*sizeof(twoIntsStruct));
        printStructLine(&data[0]);
    }
}
