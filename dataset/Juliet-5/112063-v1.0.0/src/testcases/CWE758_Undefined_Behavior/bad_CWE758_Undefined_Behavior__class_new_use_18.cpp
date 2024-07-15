namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
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
