namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        long * pointer = new long;
<START>
        long data = *pointer; 
<END>
        delete pointer;
        printLongLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
