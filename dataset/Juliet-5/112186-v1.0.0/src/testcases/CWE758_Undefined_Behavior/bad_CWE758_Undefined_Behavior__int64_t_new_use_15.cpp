namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int64_t * pointer = new int64_t;
<START>
        int64_t data = *pointer; 
<END>
        delete pointer;
        printLongLongLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
