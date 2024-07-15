void FUN0()
{
    twoIntsStruct data;
    if(globalTrue)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(globalTrue)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
