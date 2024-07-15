void FUN0()
{
    void * data;
    data = NULL;
    switch(6)
    {
    case 6:
    {
        char charBuffer = 'a';
        data = &charBuffer;
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
