void FUN0()
{
    if(globalFive==5)
    {
        {
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
<START>
            int * data = *pointer; 
<END>
            printIntLine(*data);
        }
    }
}
