void FUN0()
{
    twoIntsStruct data;
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
