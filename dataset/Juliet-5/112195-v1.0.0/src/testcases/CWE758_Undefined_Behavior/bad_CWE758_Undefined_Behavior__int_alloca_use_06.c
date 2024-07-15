static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int * pointer = (int *)ALLOCA(sizeof(int));
<START>
            int data = *pointer; 
<END>
            printIntLine(data);
        }
    }
}
