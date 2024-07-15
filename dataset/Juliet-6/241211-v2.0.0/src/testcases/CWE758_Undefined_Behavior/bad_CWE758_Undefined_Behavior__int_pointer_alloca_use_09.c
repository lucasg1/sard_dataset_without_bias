void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
