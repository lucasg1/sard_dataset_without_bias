static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    twoIntsStruct data;
    if(staticTrue)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(staticTrue)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
