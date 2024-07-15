static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    twoIntsStruct data;
    if(STATIC_CONST_FIVE==5)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
