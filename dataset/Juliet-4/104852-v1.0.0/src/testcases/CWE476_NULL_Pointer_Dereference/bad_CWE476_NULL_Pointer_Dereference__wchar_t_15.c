void FUN0()
{
    wchar_t * data;
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
        printWcharLine(data[0]);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
