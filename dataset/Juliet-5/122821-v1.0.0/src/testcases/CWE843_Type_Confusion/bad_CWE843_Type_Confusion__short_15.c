void FUN0()
{
    void * data;
    data = NULL;
    switch(6)
    {
    case 6:
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    printIntLine(*((int*)data));
<END>
}
