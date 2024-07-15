namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * * pointer = new wchar_t *;
<START>
        wchar_t * data = *pointer; 
<END>
        delete pointer;
        printWLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
