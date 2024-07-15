namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new wchar_t;
        *data = L'A';
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printWcharLine(*data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
