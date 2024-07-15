static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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
