void FUN0()
{
    void * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    break;
    }
    printIntLine(*((int*)data));
}
void FUN1()
{
    void * data;
    data = NULL;
    switch(6)
    {
    case 6:
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printIntLine(*((int*)data));
}
