void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
