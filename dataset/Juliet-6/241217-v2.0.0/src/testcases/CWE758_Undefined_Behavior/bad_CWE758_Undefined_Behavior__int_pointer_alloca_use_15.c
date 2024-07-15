void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int * * pointer = (int * *)ALLOCA(sizeof(int *));
<START>
        int * data = *pointer; 
<END>
        printIntLine(*data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
