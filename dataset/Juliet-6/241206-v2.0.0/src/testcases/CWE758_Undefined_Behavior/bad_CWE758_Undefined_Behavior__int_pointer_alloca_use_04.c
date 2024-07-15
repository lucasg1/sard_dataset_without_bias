static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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
