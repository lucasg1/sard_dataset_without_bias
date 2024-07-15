static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
