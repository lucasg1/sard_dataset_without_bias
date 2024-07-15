void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int * pointer = (int *)malloc(sizeof(int));
            if (pointer == NULL) {exit(-1);}
<START>
            int data = *pointer; 
<END>
            free(pointer);
            printIntLine(data);
        }
    }
}
