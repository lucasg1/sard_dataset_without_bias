static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    twoIntsStruct * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
<START>
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
<END>
    }
}
