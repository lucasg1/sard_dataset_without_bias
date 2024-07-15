static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    twoIntsStruct data;
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
<END>
    }
}
