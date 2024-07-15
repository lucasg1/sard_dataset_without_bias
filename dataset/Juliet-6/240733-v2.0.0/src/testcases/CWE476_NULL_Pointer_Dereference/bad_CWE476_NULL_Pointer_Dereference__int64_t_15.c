void FUN0()
{
    int64_t * data;
    switch(6)
    {
    case 6:
        data = NULL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printLongLongLine(*data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
