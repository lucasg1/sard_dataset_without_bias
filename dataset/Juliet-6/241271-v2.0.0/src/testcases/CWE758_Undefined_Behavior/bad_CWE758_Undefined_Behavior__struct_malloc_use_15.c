void FUN0()
{
    switch(6)
    {
    case 6:
    {
        twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (pointer == NULL) {exit(-1);}
<START>
        twoIntsStruct data = *pointer; 
<END>
        free(pointer);
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
