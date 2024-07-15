static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
