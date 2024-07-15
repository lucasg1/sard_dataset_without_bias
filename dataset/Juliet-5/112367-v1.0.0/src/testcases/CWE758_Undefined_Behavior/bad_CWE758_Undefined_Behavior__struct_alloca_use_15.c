void FUN0()
{
    switch(6)
    {
    case 6:
    {
        twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
<START>
        twoIntsStruct data = *pointer; 
<END>
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
