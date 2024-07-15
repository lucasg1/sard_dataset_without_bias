static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
