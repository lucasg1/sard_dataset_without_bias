namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new long;
        *data = 5L;
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
        printLongLine(*data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
