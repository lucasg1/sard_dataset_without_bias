namespace NAMESPACE0
{
void FUN0()
{
    {
        int * pointer = new int;
<START>
        int data = *pointer; 
<END>
        delete pointer;
        printIntLine(data);
    }
}
} 
