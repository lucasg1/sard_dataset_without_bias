namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            TwoIntsClass * pointer = new TwoIntsClass;
<START>
            TwoIntsClass data = *pointer; 
<END>
            delete pointer;
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
} 
