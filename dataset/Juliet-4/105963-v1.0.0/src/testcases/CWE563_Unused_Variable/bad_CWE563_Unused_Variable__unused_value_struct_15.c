void FUN0()
{
    twoIntsStruct data;
    switch(6)
    {
    case 6:
        data.intOne = 0;
        data.intTwo = 0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
