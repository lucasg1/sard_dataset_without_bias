void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int * * pointer = (int * *)malloc(sizeof(int *));
        if (pointer == NULL) {exit(-1);}
<START>
        int * data = *pointer; 
<END>
        free(pointer);
        printIntLine(*data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
