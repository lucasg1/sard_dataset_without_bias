void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
<START>
        wchar_t * data = *pointer; 
<END>
        printWLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
