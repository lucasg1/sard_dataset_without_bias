void FUN0()
{
    int64_t data;
    data = 0LL;
    switch(6)
    {
    case 6:
        data = (int64_t)RAND64();
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data > 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
