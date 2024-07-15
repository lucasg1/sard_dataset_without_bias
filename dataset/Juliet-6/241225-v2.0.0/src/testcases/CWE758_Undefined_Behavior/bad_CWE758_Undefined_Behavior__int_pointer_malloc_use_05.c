static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            int * * pointer = (int * *)malloc(sizeof(int *));
            if (pointer == NULL) {exit(-1);}
<START>
            int * data = *pointer; 
<END>
            free(pointer);
            printIntLine(*data);
        }
    }
}
