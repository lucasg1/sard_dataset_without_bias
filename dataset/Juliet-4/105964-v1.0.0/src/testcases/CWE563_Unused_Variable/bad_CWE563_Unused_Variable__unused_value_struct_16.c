void FUN0()
{
    twoIntsStruct data;
    while(1)
    {
        data.intOne = 0;
        data.intTwo = 0;
        break;
    }
    while(1)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
        break;
    }
}
