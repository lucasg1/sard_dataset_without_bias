namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
