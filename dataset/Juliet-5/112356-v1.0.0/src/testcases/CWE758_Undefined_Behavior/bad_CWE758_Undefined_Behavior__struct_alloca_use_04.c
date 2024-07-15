static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
<START>
            twoIntsStruct data = *pointer; 
<END>
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
