void FUN0()
{
    int i,j;
    twoIntsStruct data;
    for(i = 0; i < 1; i++)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}
