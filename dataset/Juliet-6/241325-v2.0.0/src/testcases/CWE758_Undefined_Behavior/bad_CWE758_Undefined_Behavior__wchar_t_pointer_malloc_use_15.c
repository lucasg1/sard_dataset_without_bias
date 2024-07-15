void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
        if (pointer == NULL) {exit(-1);}
<START>
        wchar_t * data = *pointer; 
<END>
        free(pointer);
        printWLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
