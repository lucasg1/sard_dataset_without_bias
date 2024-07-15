void FUN0()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
<START>
    data.intOne = 1;
<END>
    data.intTwo = 1;
    printStructLine(&data);
}
