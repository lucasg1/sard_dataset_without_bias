static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
