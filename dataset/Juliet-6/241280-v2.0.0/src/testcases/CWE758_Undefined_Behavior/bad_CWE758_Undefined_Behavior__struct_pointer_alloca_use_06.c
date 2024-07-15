static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
<START>
            twoIntsStruct * data = *pointer; 
<END>
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}
