void FUN0()
{
    void * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    printIntLine(*((int*)data));
}
void FUN1()
{
    void * data;
    data = NULL;
    if(globalFive==5)
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    printIntLine(*((int*)data));
}
