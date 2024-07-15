namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new char;
        *data = 'A';
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
        printHexCharLine(*data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
