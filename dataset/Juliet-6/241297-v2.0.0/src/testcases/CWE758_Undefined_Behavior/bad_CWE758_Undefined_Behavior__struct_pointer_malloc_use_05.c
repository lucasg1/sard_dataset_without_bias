static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)malloc(sizeof(twoIntsStruct *));
            if (pointer == NULL) {exit(-1);}
<START>
            twoIntsStruct * data = *pointer; 
<END>
            free(pointer);
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}
