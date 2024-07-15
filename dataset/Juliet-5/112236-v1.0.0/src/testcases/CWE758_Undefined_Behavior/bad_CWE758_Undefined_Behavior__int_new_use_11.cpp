namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrue())
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
} 
