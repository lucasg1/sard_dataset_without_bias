namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int * pointer = new int;
<START>
        int data = *pointer; 
<END>
        delete pointer;
        printIntLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
