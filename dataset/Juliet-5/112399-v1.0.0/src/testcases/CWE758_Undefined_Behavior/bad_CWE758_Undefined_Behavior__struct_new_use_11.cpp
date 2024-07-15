namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            twoIntsStruct * pointer = new twoIntsStruct;
<START>
            twoIntsStruct data = *pointer; 
<END>
            delete pointer;
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
} 
