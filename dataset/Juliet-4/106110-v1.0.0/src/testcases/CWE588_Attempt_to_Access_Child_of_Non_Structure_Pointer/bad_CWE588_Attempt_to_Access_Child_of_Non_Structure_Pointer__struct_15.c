void FUN0()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    switch(6)
    {
    case 6:
        data = &VAR0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
