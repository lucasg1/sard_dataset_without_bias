void FUN0()
{
    wchar_t * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printWcharLine(data[0]);
<END>
}
