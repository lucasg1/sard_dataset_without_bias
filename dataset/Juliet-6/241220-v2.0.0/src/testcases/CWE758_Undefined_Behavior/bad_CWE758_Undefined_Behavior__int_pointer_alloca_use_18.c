void FUN0()
{
    goto sink;
sink:
    {
        int * * pointer = (int * *)ALLOCA(sizeof(int *));
<START>
        int * data = *pointer; 
<END>
        printIntLine(*data);
    }
}
